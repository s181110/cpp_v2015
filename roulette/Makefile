D_COMPILE_CMD=gdc -frelease -finline-functions -fno-bounds-check -O3 -Werror -Wall

all: d java c++

D/d_pythonport: D/d_pythonport.d
	$(D_COMPILE_CMD) -o $@ $^

D/d_no_aa: D/d_no_aa.d
	$(D_COMPILE_CMD) -o $@ $^

D/d_no_aa_xorshift: D/d_no_aa_xorshift.d
	$(D_COMPILE_CMD) -o $@ $^
	cp $@ ./D/roulette

d: D/d_pythonport D/d_no_aa D/d_no_aa_xorshift

java:
	javac -O ./Java/Roulette.java

c++:
	g++ -Ofast -std=c++11 ./C++/roulette.cpp -o ./C++/roulette


