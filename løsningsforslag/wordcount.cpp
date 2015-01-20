/* Test: echo "How many word is this input?" | ./wordcount */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	string s;
	int counter = 0;

	while(cin >> s)
		counter++;

	// Denne vil telle antall bokstaver.
	/*
	char c;
	while(cin >> c)
		counter++;
	*/

	cout << "Words: " << counter << endl;

}