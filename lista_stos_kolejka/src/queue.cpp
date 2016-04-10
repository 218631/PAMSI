#include "queue.hh"

queue::queue(int rozmiar){
  for(int i=0; i<rozmiar;i++)
    queue_l.add(i,i);
}

int queue::size(){
  return queue_l.size();
}

bool queue::empty(){
  return size()==0;
}

void queue::enqueue(int element){
  if (empty())
    throw "Błąd, wyjście po za zakres \n";
  else{
    queue_l.add(element,size());
   }
}

int queue::dequeue(){
  if(empty())
    throw "Błąd, kolejka jest pusta! \n";
  else{
    int temp;
    temp=queue_l.get(0);
    queue_l.remove(0);
    return temp;
  }
}

