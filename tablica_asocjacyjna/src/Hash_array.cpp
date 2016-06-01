#include "Hash_array.hh"

Hash_array::Hash_array(){
  Size=1000;
  Array = new list[Size];
}

int Hash_array::Hash(string key){
  int hash=0;
  for(unsigned i=0; i<key.length();i++)
    hash=2*hash-key[i];
  hash=hash%Size;
  return hash;
}

void Hash_array::Add(string key, int value){
  int i=Hash(key);
  Array[i].add(value,0,key);
}

void Hash_array::Remove(string key){
  int i=Hash(key);
  Array[i].remove(key);
}

int Hash_array::Get(string key){
  int i=Hash(key);
  return Array[i].get(key);
}

int Hash_array::operator [] (string key){
  return Get(key);
}

