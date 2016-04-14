#ifndef STOPER_HH
#define STOPER_HH


#include "interface_stoper.hh"

using namespace std;
using namespace std::chrono;

class stoper :public interface_stoper{

private:

  high_resolution_clock:: time_point beginning,end;
  
  duration<double,milli> time;

public:

  
  void start();

  void finish();

  void get_time();
};  
#endif
