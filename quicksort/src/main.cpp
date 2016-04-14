#include "lista.hh"
#include "kolejka.hh"
#include "stoper.hh"
#include "node.hh"
#include "tablica.hh"
#include "quicksort.hh"
#include <cstdlib>
#include <iostream>

using namespace std;


int main(){
  stoper licznik;
  quicksort qsort;
  int size=20;
  int *tab=new int[size];
  srand(time(NULL));
  for(int i=0;i<size;i++)
    tab[i]=rand() % 1000;
  //for(int i=0;i<size;i++)
  //  cout << tab[i] << endl;
  //cout << "tablica wypełniona"<< endl;
  licznik.start();
  qsort.do_quicksort(tab,0,size-1);
  //cout << tab[qsort.partition(tab, 0, size-1)] << endl;
  licznik.finish();
  licznik.get_time();
  for(int i=0;i<size;i++)
    cout << tab[i] << endl;
 
  /*
  for(int i=0;i<size;i++)
    tab.dodaj(rand());

  qicksort(tab,,);
  */
  return 0;
}
