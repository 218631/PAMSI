#include "stack.hh"

stack::stack(int rozmiar)
{
  for(int i=0; i<rozmiar;i++)
    stack_l.add(i,i);
}

int stack::size()
{
  return stack_l.size();
}

bool stack::empty()
{
  return size()==0;
}

void stack::push(int element)
{
  if (empty())
    throw "Błąd, wyjście po za zakres \n";
  else
    stack_l.add(element,0);
}

int stack::pop()
{
  if(empty())
    throw "Błąd, kolejka jest pusta! \n";
  else
    {
      int temp;
      temp=stack_l.get(0);
      stack_l.remove(0);
      return temp;
    }
}

