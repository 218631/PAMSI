#ifndef INTSTOPER_HH
#define INTSTOPER_HH
#include <time.h>
#include <iostream>

using namespace std;

class interface_stoper{
  
public:
  
virtual void start()=0;
  
virtual void finish()=0;
  
virtual void get_time()=0;
  
};  
#endif
