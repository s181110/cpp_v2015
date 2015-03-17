#include <iostream>

template<typename MyType>
void print(MyType c){ 
  std::cout << c << std::endl; 
};



void test(){
  print(5);
  print(8.9);
  print("Generic printing!");
  
}
