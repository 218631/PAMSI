#include "stoper.hh"

void stoper::start(){
  beginning=high_resolution_clock::now();
}

void stoper::finish(){
  end=high_resolution_clock::now();
  time = duration_cast<duration<double,milli>>(end-beginning);
}

void stoper::get_time(){
  cout << "Czas operacji:" << time.count() << " [sekund]" << endl;
}
