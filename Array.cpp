#include <cstdlib>
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class Array{

private:
  int length;

public:
  int *FirstArray;
  int *NewArray;
  
  Array();
  ~Array();

  void extend();
};

Array::Array(){
  cout << "Prosze podac ostateczny rozmiar tablicy: ";
  cin >> length;
  cout << "Zainicjowany rozmiar: " << length << endl;
}

Array::~Array(){
  delete []FirstArray;
  delete []NewArray;
}

void Array::extend(){

  int size = 10;

  FirstArray = new int[size];
  NewArray = new int[size+1];

  for(int i=0; i < size; i++)
    {
      FirstArray[i] =  i;
    }

  for(int i = 10; i < length; i++)
    { 
    if(i>10)
      {
      delete []FirstArray;
      FirstArray = new int[size];
      for(int i = 0; i < size; i++){
	FirstArray[i]=NewArray[i];
      }
      delete []NewArray;
      NewArray = new int[size+1];
      }
    for(int i=0; i < size; i++)
      {
      NewArray[i]=FirstArray[i];
      if(i == size-1){
	NewArray[i+1] = i+1;
      }
      }
    size++;
    }
}

int main(){

  double Beginning, End;
  double Time;
  Array Tablica;

  Beginning = clock();
  Tablica.extend();
  End = clock();
  
  Time = End-Beginning;//CLOCKS_PER_SEC;
  
  cout << "Czas wykoniania operacji: " << Time << " [mikro sekund]" << endl;
  
  return 0;
}


