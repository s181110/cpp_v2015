#ifndef CLASS_ROCKET_H
#define CLASS_ROCKET_H

#include <vector>
#include <FL/Fl_Box.H>

//Local includes
#include "dot.hpp"

class rocket : public animated{
  
  // Number of dots
  int dotcount = 200;
  
  // A simple countdown, allowing the rocket to wait before firing
  int fuse;
  
  // All the dots
  std::vector<dot> dots;
  
  /** "burn the fuse", or if it's burnt down, increment all the dots **/
  void operator++() override;

  /** Optional: Reset the rocket to its initial state **/
  void reset() override {};

 public:
  // Initialize
  rocket(int _dotcount,int dotsize, int _fuse, int x, int y);  
  
  // Virtual destructor
  ~rocket() override;
};

#endif
