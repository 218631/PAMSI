#ifndef INTLISTA_HH
#define INTLISTA_HH

#include "element.hh"

class intlista{

public:

  virtual int dodaj_elemet(element,int)=0;

  virtual void usun_elemet(int)=0;
  
  virtual element zwroc_elemet(int)=0;

  virtual int rozmiar()=0;
  
};

#endif
