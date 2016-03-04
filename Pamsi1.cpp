#include <iostream>  

class TablicaDynamiczna{
  int TworzTablice(int liczba_wierszy,int liczba_kolumn){
    if(liczba_kolumn==0){
      int * TablicaDynamiczna = new int [liczba_wierszy];
      for (int i=0; i < liczba_wierszy;++i){
	TablicaDynamiczna[i]=i;
      }
      delete[] TablicaDynamiczna;
      TablicaDynamiczna=NULL;
    }
    else{
      int ** TablicaDynamiczna = new int * [liczba_wierszy];
      for( int i=0; i< liczba_wierszy;++i){
	TablicaDynamiczna[i]= new int [liczba_kolumn];
	for(int j = 0; j<liczba_kolumn;++j){
	  TablicaDynamiczna[i][j]=(j+i);
	}
      }
    }
  }
};
int main(){
  
  return 0;
    }
