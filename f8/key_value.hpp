#ifndef KEY_VALUE_HPP
#define KEY_VALUE_HPP

template<typename key,typename value>
class myHash{
  key k;
  value v;
public:
  myHash(key nKey, value nValue) : k{nKey}, v{nValue}{};
  void printValue();
  void printKey(){
    std::cout << k << std::endl;
  };
};
#endif
