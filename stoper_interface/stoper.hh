#ifndef STOPER_HH
#define STOPER_HH
#include <time.h>
#include <iostream>

#include "IntStoper.hh"

using namespace std;

class stoper :public IntStoper{
private:
  clock_t poczatek,koniec ;
  double czas;
public:
  void zacznij();
  void skoncz();
  void podaj_czas();
};  
#endif
