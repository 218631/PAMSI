#include <iostream>
#include "stoper.hh"
#include "Tree.hh"
#include <cmath>

int main(){
  stoper Stoper;
  Tree tree_search;
  

  unsigned size = 1;
  for (unsigned k = 1; k <= 6; k++)
    {
      size*=10;
      cout<<"dodawanie, rozmiar " << size << ":"<<endl;
      for(int j=0;j<10;j++){
	Tree tree; 
	Stoper.start();
	for(int i=0;i<size;i++)
	  {
	    
	    tree.add(i);
	  }
	Stoper.finish();
	Stoper.get_time();
	tree_search=tree;
      }
      
      
      cout<<"wyszukiwanie:"<<endl;
      for(int j=0;j<10;j++){
	Stoper.start();
	
	tree_search.find(size-1);
	
	Stoper.finish();
	Stoper.get_time();
      }
    }
  return 0;
}
