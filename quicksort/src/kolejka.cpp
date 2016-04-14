#include "kolejka.hh"
#include "lista.hh"

void Queue::push(int element)
{
  lista.add(element,lista.size());
  Size=lista.size();
}
int Queue::pop()
{
  temp=lista.get(lista.size());
  lista.remove(lista.size());
  Size=lista.size();
  return temp;
}
int Queue::size()
{
  return Size;
}
