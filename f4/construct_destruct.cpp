#include <iostream>

using namespace std;


class Student{
  int _nr;
  string _name;

public:
  Student(string _n) : _name{_n}, _nr{42}{
    cout << "Constructing student " << _n << endl;
    cout << "_nr : " << _nr << endl;
  }
  Student() : _name{"John Doe"}, _nr{42} {}

  string name(){ return _name; };
  
  ~Student(){
    cout << "Deleting student!" << endl;
  }
  

};

int main(){

  // Hvilken initialisering er riktig?                                                                         
  Student s1;
  Student s2{"Alfred"};
  //Student s3 = new Student("Alfred");
  Student s4 = Student("Alfred");
  Student* s5{new Student{"Alfred"}};

  cout << s1.name() << endl;
  cout << s2.name() << endl;
  //cout << s3.name() << endl;
  cout << s4.name() << endl;
  cout << s5->name() << endl;

  delete s5;
  
}



