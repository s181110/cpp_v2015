#include <iostream>

#include "key_value.hpp"
#include "int_template_params.hpp"

using namespace std;

MyArr<int,10> arr;

// Lag mer plass, feks. slik:
//MyArr<int,10*100*100> arr;
// PS: Når vil dette regnestykket bli regnet ut? 

int main(){
  
  myHash<const char*,int> pair("MyKey",10);
  pair.printKey();
  

  arr.elements[9]=42;
  cout << arr[100] << endl;
  

}
