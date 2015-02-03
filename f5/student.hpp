#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <fstream>
#include <vector>

class Student{
  std::vector<std::string> names_;
  std::string email_{"N/A"};
  std::string studnr_{"N/A"};
  
  static int current_nr_;
public:
   
  /** Construct with names only. Email will be N/A **/
  Student(std::initializer_list<std::string> names);
  Student(std::initializer_list<std::string> names, 
          std::string mail);
  std::string str();
  
  /** Get student number. */
  std::string nr();
  
  static bool valid_studnr(std::string);
  static std::string generate_studnr();
};

#endif
