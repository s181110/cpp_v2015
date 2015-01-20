#include <vector>
#include <map>
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>

using namespace std;

const int N = 100000;

int main() {
	vector<int> v;
	map<string, int> m;
	int a[N];

	// start/stop watch
	time_t start, stop;
	// seed
	srand(time(NULL));

	
	cout << endl << "Running " << N << " random numbers." << endl;
	

	cout << endl << "Vector" << endl;

	start = clock();
	for(int i = 0; i < N; i++) {
		v.push_back(rand());
	}
	stop = clock();
	cout << "# Add: " << stop-start << endl;


	start = clock();
	for(int i = 0; i < N; i++) {
		v[rand() % v.size()] = rand();
	}
	stop = clock();
	cout << "# Replace: " << stop-start << endl;


	cout << endl << "Array" << endl;

	start = clock();
	for(int i = 0; i < N; i++) {
		a[i] = rand();
	}
	stop = clock();
	cout << "# Add: " << stop-start << endl;


	start = clock();
	for(int i = 0; i < N; i++) {
		a[rand() % N] = rand();
	}
	stop = clock();
	cout << "# Replace: " << stop-start << endl;


	cout << endl << "Map" << endl;

	start = clock();
	for(int i = 0; i < N; i++) {
		m[string("s") + to_string(i)] = rand();
	}
	stop = clock();
	cout << "# Add: " << stop-start << endl;


	start = clock();
	for(int i = 0; i < N; i++) {
		m[string("s") + to_string(rand() % N)] = rand();
	}
	stop = clock();
	cout << "# Replace: " << stop-start << endl;

	cout << endl << "Finished!" << endl;
}