#include <iostream>
#include <stdexcept>

using namespace std;

/** A common base class makes you write less code! **/
class Vehicle{
  string name_;
  static int regnr;
public:
  Vehicle(string n) : name_{n+"_"+to_string(regnr++)}{};
  friend ostream& operator<<(ostream&,Vehicle);
};

// Statics must be defined outside the "header" - it's in the binary.
int Vehicle::regnr{0};

// We want to be able to push vehicles directly onto streams like cout
ostream& operator<<(ostream& str,Vehicle v){
  return str << v.name_;
};

// If something goes wrong, we want to know if the error came from us!
class VehicleException : public runtime_error {
public: VehicleException(string s) : runtime_error{s}{}
};

// Almost no work for the subclass...
class Minibus : public Vehicle{
public:
  Minibus() : Vehicle{"Minibus"}{};
};

// Need to forward declare this, if we want the Bus to know about Cars...
class Car;

class Bus : public Vehicle{
public:
  Bus() : Vehicle{"Bus"}{};
  // What it means to say "bus + car"
  Minibus operator+(Car& c){ return Minibus{}; }
};

//...and also Cars to know about buses
class Car : public Vehicle{
public:
  Car() : Vehicle{"Car"}{};
  //What it means to say "car + bus" - could work, but let's forbid it
  Minibus operator+(Bus& c){ throw VehicleException("No way"); }
};

int main(){  
  Bus bus;
  Car car;
  cout << "My vehicles: " << bus << "," << car << endl;  
  
  // We can now push the whole expression direcly onto the stream!
  cout << "Bus + Car: " << bus+car << endl;
  cout << "Bus + Car: " << bus+car << endl;
  cout << "Car + Bus: " << car+bus << endl;
}
