import std.stdio, std.random, std.traits, std.conv;

enum Color : bool
{
    black,
    red
}

Color spin()
{
    return uniform!Color();
}

void main(string[] args)
{
    immutable numSpins = args[1].to!int();
    writeln("Simulating ", numSpins, " rounds of roulette");

    uint[EnumMembers!(Color).length] colorCount;
    ubyte currentSequenceCount;
    uint[typeof(currentSequenceCount)] sequenceCounts;

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
            if(auto e = currentSequenceCount in sequenceCounts)
                ++(*e);
            else
                ++sequenceCounts[currentSequenceCount];
            currentSequenceCount = 0;
        }
    }

    writeln("\nR E S U L T S:\n");
    writeln("Len.\tCount");
    foreach(k, v ; sequenceCounts)
        writeln(k, "\t", v);
}
