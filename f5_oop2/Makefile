GCC=g++
CCOPT=-std=c++11

# Add more as you please
OBJECTS=student.o square.o studreg.o

# Name of the final binary
EXEC=studreg

all: $(OBJECTS)
	$(GCC) $(CCOPT) $(OBJECTS) -o $(EXEC)

%.o: %.cpp
	$(GCC) $(CCOPT) -c $< -o $@

clean:
	$(RM) $(OBJECTS)
	$(RM) $(EXEC)

