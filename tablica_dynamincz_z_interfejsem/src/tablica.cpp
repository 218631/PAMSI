#include "tablica.hh"

Tablica::Tablica(){
  rozmiar = 10;
  wsk = new int[rozmiar];
  ilosc_elementow=0;
}

Tablica::~Tablica(){
  delete []wsk;
}

void Tablica::dodaj(int x){
  if(ilosc_elementow<rozmiar) {
    wsk[ilosc_elementow]=x;
    ilosc_elementow++;
  }
  else{
    int* Tab = new int[rozmiar+1];
    for(int i=0; i<rozmiar;i++)
      {
	Tab[i]=wsk[i];
      }
    delete []wsk;
    Tab[ilosc_elementow]=x;
    rozmiar++;
    ilosc_elementow++;
    wsk=Tab;
  }
}

void Tablica::mnoz(int x){
  if(ilosc_elementow<rozmiar){
    wsk[ilosc_elementow]=x;
    ilosc_elementow++;
  }
  else{
    int mnoznik=2;
    int *Tab = new int[rozmiar*mnoznik];
    for(int i=0; i<rozmiar;i++)
      {
	Tab[i]=wsk[i];
      }
    delete []wsk;
    Tab[ilosc_elementow]=x;
    rozmiar*=mnoznik;
    ilosc_elementow++;
    wsk=Tab;
  }
}

void Tablica::poteguj(int x){
  if(ilosc_elementow<rozmiar){
    wsk[ilosc_elementow]=x;
    ilosc_elementow++;
  }
  else{
    int *Tab = new int[rozmiar*rozmiar];
    for(int i=0; i<rozmiar;i++)
      {
	Tab[i]=wsk[i];      }
    delete []wsk;
    Tab[ilosc_elementow]=x;
    rozmiar*=rozmiar;
    ilosc_elementow++;
    wsk=Tab;
  }
}
