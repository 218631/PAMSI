#include "list.hh"
#include "stack.hh"
#include "queue.hh"
#include "stoper.hh"
#include "node.hh"
#include <iostream>


using namespace std;


int main(){
  list lista;
  int size;
  stoper licznik;
  
  cout << "Prosze podać rozmiar listy: ";
  cin >> size;
  
  licznik.start();

  lista.fill(size);

  licznik.finish();
  
  licznik.get_time();
  return 0;
}
