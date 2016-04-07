#include "kolejka.hh"

kolejka::kolejka(int rozmiar){
  rozmiar_tablicy=rozmiar;
  kolejka_t= new int[rozmiar];
  poczatek = ceil(rozmiar/2);
  koniec = poczatek;
}

kolejka::~kolejka(){
  delete []kolejka_t;
}

int kolejka::dlugosc(){
  return (rozmiar_tablicy-poczatek+koniec)%rozmiar_tablicy;
}

bool kolejka::pusta(){
  if(poczatek=koniec)
    return true;
}

void kolejka::zakolejkuj(int element){
  if (dlugosc()==rozmiar_tablicy-1)
    throw 1;
  else{
    kolejka_t[koniec]=element;
    koniec++;
  }
}

int kolejka::odkolejkuj(){
  if(pusta())
    throw 2;
  else{
    int temp;
    temp=kolejka_t[poczatek];
    poczatek=(poczatek+1)%rozmiar_tablicy;
    return temp;
  }
}
