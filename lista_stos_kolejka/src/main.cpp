#include "list.hh"
#include "stack.hh"
#include "queue.hh"
#include "stoper.hh"
#include "node.hh"
#include <iostream>


using namespace std;


int main(){
  list lista;
  int size=100;
  stoper licznik;

  cout << size << endl;
    //"Prosze podać rozmiar listy: ";
    // cin >> size;
  lista.fill(size);

  licznik.start();

  lista.get(size-1);

  licznik.finish();

  licznik.get_time();
  return 0;
}
