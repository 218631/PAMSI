#ifndef STOPER_HH
#define STOPER_HH
#include <time.h>
#include <iostream>

#include "interface_stoper.hh"

using namespace std;

class stoper :public interface_stoper{
private:
  clock_t beginning,end ;
  double time;
public:
  void start();
  void finish();
  void get_time();
};  
#endif
