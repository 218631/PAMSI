#include <cstdlib>
#include <iostream>
#include <string>
#include "Stoper.hh"
#include "Tablica.hh"


int main(){

  Tablica Tab;
  int c;
  Stoper start;
  double czas;
  cout << "Prosze podac ilosc elementow, ktore maja byc wczytane do tablicy:";
  cin >> c; // ostateczny rozmiar tablicy

  //Metoda nr. 1 zwiekszanie rozmiaru tablicy o 1
  start.poczatek();
  for(int i=0; i < c; i++)
    {
      Tab.dodaj(1);
    }
  start.koniec();
 cout << "Czas operacji dla metody '1':" << czas << " [sekund]" << endl;
