#include "Stoper.hh"

void stoper::poczatek(){
 poczatek=clock();
  return start;
}

void stoper::koniec(){
  double czas;
  koniec=double(clock());
  czas=(double)(koniec-start)/CLOCK_PER_SEC;
  return czas;
}
