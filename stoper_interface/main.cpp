#include <cstdlib>
#include <iostream>
#include <string>
#include "tablica.hh"
#include "stoper.hh"


using namespace std;

int main(){

  Tablica Tab1,Tab2,Tab3;
  int c;
  stoper licznik;
  cout << "Prosze podac rozmiar tablicy:";
  cin >> c; // ostateczny rozmiar tablicy

    //Metoda nr. 1 zwiekszanie rozmiaru tablicy o 1
  /*
  licznik.start();
  for(int i=0; i < c; i++)
    {
      Tab1.dodaj(1);
    }
  licznik.finish();
  licznik.get_time();
  */
  // Metoda nr. 2 podwajanie rozmiaru tablicy
  licznik.start();
  for(int i=0; i < c; i++)
    {
      Tab2.mnoz(1);
    }
  licznik.finish();
  licznik.get_time();

  
  //Metoda nr. 3 przemnazanie aktualnego rozmiaru przez owy rozmiar
  licznik.start();
  for(int i=0; i < c; i++)
    {
      Tab3.poteguj(1);
    }
  licznik.finish();
  licznik.get_time();

  return 0;
}
