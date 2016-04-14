#ifndef TABLICA_HH
#define TABLICA_HH
#include "IntTablica.hh"


class Tablica :public IntTablica{

  int* wsk;

  int rozmiar;

  int ilosc_elementow;

public:

  Tablica();

  ~Tablica();

  void dodaj(int x);

  void poteguj(int x);

  void mnoz(int x);

};


#endif
