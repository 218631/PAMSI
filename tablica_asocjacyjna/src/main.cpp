#include "list.hh"
#include "Hash_array.hh"
#include "stoper.hh"
#include "node.hh"
#include <iostream>


using namespace std;
int main(){

  Hash_array Aso;
  stoper Stoper;
  string key="dominik";
  int value=4;
  list lista;

  //cin >> value;
  //cin >> key;

  Stoper.start();
  lista.add(value,0,key);
  Aso.Add(key,value);
  Stoper.finish();
  Stoper.get_time();


  Stoper.start();
  //Aso.Get(key);
  Stoper.finish();
  Stoper.get_time();

  return 0;
}
