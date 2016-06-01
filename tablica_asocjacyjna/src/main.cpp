#include "list.hh"
#include "Hash_array.hh"
#include "stoper.hh"
#include "node.hh"
#include <iostream>
#include <fstream>

using namespace std;
int main(){

  Hash_array Aso;
  stoper Stoper;
  string key;
  int value;
  list lista;
  std::fstream file;
  int c;
  int repeat=1000000;
  
  file.open("1000000.txt");
  
  Stoper.start();
  for(int i=0;i<repeat;i++)
    {
      file >> key >> value;
      Aso.Add(key,value);
    }
  Stoper.finish();
  Stoper.get_time();
  file.close();

  Stoper.start();
  c=Aso[key]; //.Get(key);
  Stoper.finish();
  Stoper.get_time();

  return 0;
}
