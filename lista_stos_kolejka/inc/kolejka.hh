#ifndef KOLEJKA_HH
#define KOLEJKA_HH

#include <math.h>
#include "intkolejka.hh"

class kolejka :public intkolejka{
  int rozmiar_tablicy;
  int* kolejka_t;
  int poczatek;
  int koniec;
public:
  kolejka(int);
  ~kolejka();
  int dlugosc();
  bool pusta();
  void zakolejkuj(int);
  int odkolejkuj();
};

#endif
