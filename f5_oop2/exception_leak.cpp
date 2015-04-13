#include <iostream>

using namespace std;

void fill(int* arr,int size){
  for(int i=0;i<size;i++){
    arr[i]=42;
    if(i>100)
      throw string("Aw... too tired"); //throw "Aw... too tired"; (!)
  }
}

void alloc(){
  const int size=1000;

  // Aldri kalle new ute delete
  int* i=new int[size];
  fill(i,size);
  // Her kjøres delete - helt riktig!
  // (delete[]for allokering med new ..[])
  delete[] i;

  // Hvordan får vi lekkasje da?
}

/**
    Kode for å demonstrere en minnelekkasje forårsaket av exception
    Kompilér med "make exception_leak"
    Kjør med "valgrind ./exception_leak".
 **/
int main(){
  try{
    alloc();
  }catch(string s){
    cout << "Exception caught: "<< s << endl;
  }

  // Programmet fortsetter i en ... meny, event-loop el.
  string input;
  while(true){
    cin >> input;
    cout << input;
  }
  // Lekkasjer?
}
