import std.stdio, std.random, std.traits, std.math, std.conv;

immutable ubyte MAX_ALLOWED_SEQUENCE_LENGTH = 50;

enum Color : bool
{
    black,
    red
}

Xorshift32 rndGen;
shared static this()
{
    rndGen = Xorshift32(unpredictableSeed);
}

Color spin()
{
    return rndGen.uniform!Color();
}

void main(string[] args)
{
    immutable numSpins = args[1].to!int;
    writeln("Simulating ", numSpins, " rounds of roulette");

    uint[EnumMembers!(Color).length] colorCount;
    ubyte currentSequenceCount;
    uint[MAX_ALLOWED_SEQUENCE_LENGTH] sequenceCounts;

    ubyte maxSequenceLengthSeen;

    auto result = spin();
    Color prev;
    foreach(i; 0 .. numSpins)
    {
        ++colorCount[result];
        prev = result;
        result = spin();
        if(result == prev)
        {
            assert(currentSequenceCount < typeof(currentSequenceCount).max,
                "currentSequenceCount overflows");
            ++currentSequenceCount;
        }
        else
        {
            ++sequenceCounts[currentSequenceCount];
            if(currentSequenceCount > maxSequenceLengthSeen)
                maxSequenceLengthSeen = currentSequenceCount;
            currentSequenceCount = 0;
        }
    }

    writeln("\nR E S U L T S:\n");
    writeln("Len.\tCount");
    for(ubyte i = 0; i < maxSequenceLengthSeen; ++i)
        writeln(i, "\t", sequenceCounts[i]);
}
