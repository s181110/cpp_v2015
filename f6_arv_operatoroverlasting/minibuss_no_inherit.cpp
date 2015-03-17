#include <iostream>

using namespace std;

class Minibus{
  string name_;
  static int count;
public:
  Minibus() : name_{"Minibus_"+to_string(count++)}{};
  friend ostream& operator<<(ostream&,Minibus);
};

int Minibus::count{0};

class Car;

class Bus{
  string name_;
  static int count;
public:  
  Bus() : name_{"Bus_"+to_string(count++)} {};
  Minibus operator+(Car& c){ return Minibus{}; }
  friend ostream& operator<<(ostream&,Bus);  
};

int Bus::count{0};

class Car{
  string name_;
  static int count;
public:  
  Car() : name_{"Car_"+to_string(count++)}{};
  friend ostream& operator<<(ostream&,Car);    
};

int Car::count{0};

ostream& operator<<(ostream& str,Bus b){
  return str << b.name_;
}

ostream& operator<<(ostream& str,Minibus b){
  return str << b.name_;
}

ostream& operator<<(ostream& str,Car b){
  return str << b.name_;
}

int main(){  
  Bus bus;
  Car car;
  cout << "My vehicles: " << bus << "," << car << endl;  
  cout << "Bus + Car: " << bus+car << endl;
  cout << "Bus + Car: " << bus+car << endl;
  //cout << "Car + Bus: " << car+bus << endl;  
}
