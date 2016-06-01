#include <iostream>
#include "stoper.hh"
#include "Tree.hh"
#include <cmath>
#define size 1000000

int main(){
  stoper Stoper;
  Tree tree;
  int element;
  
  //dodawanie
  Stoper.start();

  for(int i=0;i<size-1;i++)
    {
      element=rand()%10;
      tree.add(element);
    }
  tree.add(size);

  Stoper.finish();
  Stoper.get_time();


  //wyszukiwanie
  Stoper.start();

  tree.find(size);

  Stoper.finish();
  Stoper.get_time();
  
return 0;
}
