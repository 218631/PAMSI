#ifndef LISTA_HH
#define LISTA_HH

#include "intlista.hh"

class lista :public intlista{

  int* pierwszy;
  int* ostatni;
  
 public:

  lista(int);

  ~lista();
  
  int dodaj_element(element,int);
  
  void usun_element(int);
  
  element zwroc_element(int);
  
  int dlugosc();
};

#endif
