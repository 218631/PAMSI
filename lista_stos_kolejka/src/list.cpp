#include "list.hh"
#include <iostream>

list::list(){
  first=0;
  list_size=0;
}

list::~list(){
  node* current=first;
  node* temp;
  while(current)
    {
      temp=current;
      current=current->next;
      delete temp;
      }
  list_size=0;
  first=0;
}
void list::add(int element, int position){
  node* temp;
  node* current=first;
  if(position==0){
    temp=first;
    first=new node;
    first->next=temp;
    first->element=element;
    list_size++;
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
    list_size++;
  }
}
  
void list::remove(int position){
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
    list_size--;
  }
}

int list::get(int position){
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

int list::size(){
  return list_size;
}

/*
void list::fill(int size){
  node* temp;
  for(int i=0; i < size; i++)
    {
      add(i,i);
      }
  temp=first;
  while(temp->next)
    {
      cout <<  temp->element << endl;
      temp=temp->next;
    }
  cout << endl;
  for(int i; i<3;i++)
    {
      remove(i);
    }
  temp=first;
    while(temp->next)
    {
      cout <<  temp->element << endl;
      temp=temp->next;
    }
  cout<<endl;
}

*/
