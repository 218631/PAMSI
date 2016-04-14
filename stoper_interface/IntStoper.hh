#ifndef INTSTOPER_HH
#define INTSTOPER_HH

#include <iostream>
#include <chrono>

using namespace std;

class IntStoper{
  
public:
  
virtual void zacznij()=0;
  
virtual void skoncz()=0;
  
virtual void podaj_czas()=0;
  
};  
#endif
