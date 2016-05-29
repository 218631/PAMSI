#ifndef INTSTOPER_HH
#define INTSTOPER_HH
#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono;

class interface_stoper{
  
public:
  
virtual void start()=0;
  
virtual void finish()=0;
  
virtual void get_time()=0;
  
};  
#endif
