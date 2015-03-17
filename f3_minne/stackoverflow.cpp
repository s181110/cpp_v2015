#include <iostream>

using namespace std;


int stacksize(){
  const int SIZE =1000000;
  char arr[SIZE];
  for(int i=0; i<SIZE;i++){
    arr[i]='C';
  }
}


int recursive(){
  //int a = 10;
  return recursive();
}

int main(){
  //stacksize();
  recursive();
}
