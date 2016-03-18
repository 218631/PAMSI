#include <cstdlib>
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class Tablica{
public:
  Tablica();
  ~Tablica();
  void dodaj(int x);
  void poteguj(int x);
  void mnoz(int x);
  int* wsk;
  int rozmiar;
  int ilosc_elementow;
};

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

int main(){

  Tablica Tab1,Tab2,Tab3;
  int c;
  clock_t start,koniec;
  double czas;
  cout << "Prosze podac rozmiar tablicy:";
  cin >> c; // ostateczny rozmiar tablicy

  //Metoda nr. 1 zwiekszanie rozmiaru tablicy o 1
  start=clock();
  for(int i=0; i < c; i++)
    {
      Tab1.dodaj(1);
    }
  koniec=clock();
  czas=(double)(koniec-start)/CLOCKS_PER_SEC;
  cout << "Czas operacji dla metody '1':" << czas << " [sekund]" << endl;
 
 
  // Metoda nr. 2 podwajanie rozmiaru tablicy
  start=clock();
  for(int i=0; i < c; i++)
    {
      Tab2.mnoz(1);
    }
  koniec=clock();
  czas=(double)(koniec-start)/CLOCKS_PER_SEC;
  cout << "Czas operacji dla metody '2':" << czas << " [sekund]" << endl;
  
  //Metoda nr. 3 przemnazanie aktualnego rozmiaru przez owy rozmiar
  start=clock();
  for(int i=0; i < c; i++)
    {
      Tab3.poteguj(1);
    }
  koniec=clock();
  czas=(double)(koniec-start)/CLOCKS_PER_SEC;
  cout << "Czas operacji dla metody '3':" << czas << " [sekund]" << endl;

  return 0;
}
