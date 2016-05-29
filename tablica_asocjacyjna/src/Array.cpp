#include "Array.hh"

Array::Array(){
  size = 10;
  pointer = new int[size];
  amount_of_elements=0;
}

Array::~Array(){
  delete []pointer;
}

void Array::add(int x){
  if(amount_of_elements<size) {
    pointer[amount_of_elements]=x;
    amount_of_elements++;
  }
  else{
    int* Tab = new int[size+1];
    for(int i=0; i<size;i++)
      {
	Tab[i]=pointer[i];
      }
    delete []pointer;
    Tab[amount_of_elements]=x;
    size++;
    amount_of_elements++;
    pointer=Tab;
  }
}

void Array::multiply(int x){
  if(amount_of_elements<size){
    pointer[amount_of_elements]=x;
    amount_of_elements++;
  }
  else{
    int multiplynik=2;
    int *Tab = new int[size*multiplynik];
    for(int i=0; i<size;i++)
      {
	Tab[i]=pointer[i];
      }
    delete []pointer;
    Tab[amount_of_elements]=x;
    size*=multiplynik;
    amount_of_elements++;
    pointer=Tab;
  }
}

void Array::power(int x){
  if(amount_of_elements<size){
    pointer[amount_of_elements]=x;
    amount_of_elements++;
  }
  else{
    int *Tab = new int[size*size];
    for(int i=0; i<size;i++)
      {
	Tab[i]=pointer[i];      }
    delete []pointer;
    Tab[amount_of_elements]=x;
    size*=size;
    amount_of_elements++;
    pointer=Tab;
  }
}
