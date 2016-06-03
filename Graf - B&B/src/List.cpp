#include "List.hh"
#include <iostream>

List::List(){
  first=0;
  List_size=0;
}

List::~List(){
  node* current=first;
  node* temp;
  while(current)
    {
      temp=current;
      current=current->next;
      delete temp;
      }
  List_size=0;
  first=0;
}
void List::add(int element, int position){
  node* temp;
  node* current=first;
  if(position==0){
    temp=first;
    first=new node;
    first->next=temp;
    first->element=element;
    List_size++;
  }
  else{
    int i=0;
    while(i<position-1 && current->next)
      {
	if(!current->next) return;
	current=current->next;
	i++;
      }
    temp=current->next;
    current->next=new node;
    current->next->element=element;
    current->next->next=temp;
    List_size++;
  }
}
  
void List::remove(int position){
  node* temp;
  node* current;
  if(position<0 or position>(size()-1))
    throw "Przekroczony zakres \n";
  else{
    current=first;
    int i=0;
    while(i<position-1)
      {
	current=current->next;
	i++;
      }
    temp=current->next;
    delete temp;
    current->next=current->next->next;
    List_size--;
  }
}

int List::get(int position){
  node* temp;
  if(position<0 or position>(size()-1))
    throw "Przekroczony zakres \n";
  else{
  if(position==0)
    {
      return first->element;
    }
  else
    {
      temp=first;
      for(int i=0;i<position;i++)
	{
	  temp=temp->next;
	}
      return temp->element;
    }
  }
}

int List::size(){
  return List_size;
}


void List::fill(int size){
  for(int i=0; i < size; i++)
      add(i,0);
}


