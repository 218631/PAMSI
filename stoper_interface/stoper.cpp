#include "stoper.hh"

void stoper::zacznij(){
  poczatek=clock();
}

void stoper::skoncz(){
  koniec=clock();
  czas=(double)(koniec-poczatek);
}

void stoper::podaj_czas(){
  cout << "Czas operacji dla metody '2':" << czas << " [milisekund]" << endl;
}
