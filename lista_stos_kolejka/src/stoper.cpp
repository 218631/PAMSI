#include "stoper.hh"

void stoper::start(){
  beginning=clock();
}

void stoper::finish(){
  end=clock();
  time=(double)(end-beginning)/CLOCKS_PER_SEC;
}

void stoper::get_time(){
  cout << "Czas operacji dla metody '2':" << time << " [sekund]" << endl;
}
