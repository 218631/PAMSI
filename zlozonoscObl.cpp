#include <cstdlib>
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class Tablica{
public:
  Tablica();
  ~Tablica();
  void dodaj(int x);
  void poteguj(int x);
  void podwoj(int x);
  int* wsk;
  int rozmiar;
  int lel;
};

Tablica::Tablica(){
  rozmiar = 10;
  wsk = new int[rozmiar];
  lel=0;
}

Tablica::~Tablica(){
  delete []wsk;
}

void Tablica::dodaj(int x){
  if(lel<rozmiar) {
    wsk[lel]=x;
    lel++;
  }
  else{
   int* Tab = new int[rozmiar+1];
    for(int i=0; i<rozmiar;i++)
      {
	Tab[i]=wsk[i];
      }
    delete []wsk;
    Tab[lel]=x;
    rozmiar++;
    lel++;
    wsk=Tab;
  }
}

void Tablica::podwoj(int x){
  if(lel<rozmiar){
    wsk[lel]=x;
    lel++;
  }
  else{
    int *Tab = new int[rozmiar*2];
    for(int i=0; i<rozmiar;i++)
      {
	Tab[i]=wsk[i];
      }
    delete []wsk;
    Tab[lel]=x;
    rozmiar*=2;
    lel++;
    wsk=Tab;
  }
}

void Tablica::poteguj(int x){
  if(lel<rozmiar){
    wsk[lel]=x;
    lel++;
  }
  else{
    int *Tab = new int[rozmiar*rozmiar];
    for(int i=0; i<rozmiar;i++)
      {
	Tab[i]=wsk[i];
      }
    delete []wsk;
    Tab[lel]=x;
    rozmiar*=rozmiar;
    lel++;
    wsk=Tab;
  }
}

int main(){

  Tablica Tab1,Tab2,Tab3;
  int c;
  clock_t start,koniec;
  double czas;
  cout << "Prosze podac rozmiar tablicy:";
  cin >> c; // ostateczny rozmiar tablicy
  
  //Metoda nr. 1 zwiekszanie rozmiaru tablicy o 1
  start=clock();
  for(int i=0; i < c; i++)
    {
      Tab1.dodaj(1);
    }
  koniec=clock();
  czas=(double)(koniec-start)/CLOCKS_PER_SEC;
  cout << "Czas operacji dla metody '1':" << czas << " [sekund]" << endl;

  // Metoda nr. 2 podwajanie rozmiaru tablicy
  start=clock();
  for(int i=0; i < c; i++)
    {
      Tab2.podwoj(1);
    }
  koniec=clock();
  czas=(double)(koniec-start)/CLOCKS_PER_SEC;
  cout << "Czas operacji dla metody '2':" << czas << " [sekund]" << endl;

  //Metoda nr. 3 przemnazanie aktualnego rozmiaru przez owy rozmiar
  start=clock();
  for(int i=0; i < c; i++)
    {
      Tab3.poteguj(1);
    }
  koniec=clock();
  czas=(double)(koniec-start)/CLOCKS_PER_SEC;
  cout << "Czas operacji dla metody '3':" << czas << " [sekund]" << endl;

  return 0;
}
