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
void list::add(int element, int position , std::string key){
  node* temp;
  node* current=first;
  if(position==0){
    temp=first;
    first=new node;
    first->next=temp;
    first->element=element;
   // first->key=key;
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
    current->next->key=key;
    current->next->next=temp;
    list_size++;
    }
}

void list::remove(std::string key){
  node* current;
  node* temp;
  current=first;

  for(int i=0;i<size();i++)
    {
      if(current->key==key){
	temp=current->next;
	delete temp;
      }
      else{
	current=current->next;
      }
    }
}

int list::get(std::string key){
  node* current;
  current=first;
  for(int i=0;i<size();i++)
    {
      if(current->key==key)
	{
	  return current->element;
	}
      else
	{
	  current=current->next;
	}
    }
  return 0;
}


int list::size(){
  return list_size;
}


