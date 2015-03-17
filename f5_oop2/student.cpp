#include "student.hpp"

// Not included in header - why?
#include <iostream>


using namespace std;


Student::Student(initializer_list<string> names, 
                 string mail) :
  names_{names}, email_{mail}
{ 
  cout << "Constructing student " 
       << *names.begin() << endl; 
}

Student::Student(initializer_list<string> names) :
  Student{names,"N/A"}{}


string Student::str(){
  string name="";
  for(auto n : names_)
    name+=" "+n;
  return name+" <"+email_+">";
}
