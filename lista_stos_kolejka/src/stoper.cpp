#include "stoper.hh"

void stoper::zacznij(){
  poczatek=clock();
}

void stoper::skoncz(){
  koniec=clock();
  czas=(double)(koniec-poczatek)/CLOCKS_PER_SEC;
}

void stoper::podaj_czas(){
  cout << "Czas operacji dla metody '2':" << czas << " [sekund]" << endl;
}
