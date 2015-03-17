#ifndef INT_TEMPLATE_PARAMS_HPP
#define INT_TEMPLATE_PARAMS_HPP

#include <stdexcept>

template <typename T, int SIZE>
struct MyArr{
  T elements[SIZE];
  
  T operator[](int i){
    if(i >= SIZE)
      throw std::runtime_error("Index out of bounds");
    return elements[i];
  }

};



#endif
