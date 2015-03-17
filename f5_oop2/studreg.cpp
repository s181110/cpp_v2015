#include <iostream>

// Locals
#include "student.hpp"

// Hvis vi ikke har en header-fil gjør dette samme nytten:
// (implementasjonen er i square.cpp)
int square(int);

using namespace std;

// En liste av studenter
vector<Student> studreg;

int main(){  
  
  // Initialisering med "initializer-list" + string
  Student s1{{"Alfred","Sewitsky","Bratterud"},"alfreb@hioa.no"};
  cout << "First student " << s1.str() << endl;
  
  // Initialisering med kun initializer-list. 
  Student s2{"Erna","Solberg"}; 
  
  // Legge inn i listen
  studreg.push_back(s1);
  studreg.push_back({"Jens","Bjørneboe"});
  studreg.push_back({"Henrik","Ibsen"});
  
  // Iterere over og skrive ut
  cout << "Students: " << endl;
  for(Student s : studreg){
    cout << s.str() << endl;
  }
  
  // Kall på ekstern funksjon som må være "linket inn"
  cout << "And a square: " << square(10) << endl;

}
