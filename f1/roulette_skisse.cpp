#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Counting the sequences of length


//#define MAX_SEQ 50
const int MAX_SEQ = 50;
int seq[MAX_SEQ];  

int main(){

  int n = 10000;
  cout << "The first value: " << seq[1] << endl;
  
  cout << n << " ROUNDS OF ROULETTE  " << endl;

  /* The "C" way - formatted printing*/
  //printf("%i ROUNDS OF ROULETTE \n", n);

  auto t1 = time(0);
  cout << "Time: " << t1 << endl;
  srand(t1);
  cout << "A random number : " << rand() << endl;    
  
  int current_seq = 0;  
  bool prev = rand()%2;
  
  for(int i = 0; i < n; i++){
    
    bool spin = rand() % 2;
    if(spin == prev){
      current_seq++;            
    }else{
      seq[current_seq]++;
      current_seq = 0;
    }
    
    prev = spin;
    
  }
  
  cout << "RESULTS: " << endl;
  
  for(int i = 0 ; i < MAX_SEQ; i++){
    cout << i << " : " << seq[i] << endl;
  }
  
}
