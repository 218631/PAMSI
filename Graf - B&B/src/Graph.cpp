#include "Graph.hh"

Graph::Graph(){
  Neighbours = new int* [size];
  for(int i =0; i < size; ++i)
    Neighbours[i]= new int [size];
}
Graph::~Graph(){
  for (int i =0; i<size; ++i)
    delete [] Neighbours[i];
  delete [] Neighbours;
}

void Graph::addVertex(int x)
{
  while(x>size) extend();
}

void Graph::extend()
{
  int temp_size = size;
  size *=2;
  int** Temp;
  Temp = new int* [size];
  for(int i =0; i < size; ++i)
    Temp[i]= new int [size];

  for(int i = 0; i<temp_size; ++i)
  {
    for (int j = 0; j < temp_size; ++j)
    {
      Temp[i][j] = Neighbours[i][j];
    }
  }
  for (int i = 0 ; i<temp_size; ++i)
    delete[] Neighbours[i];
  delete[] Neighbours;
  Neighbours = Temp;
}

void Graph::addEdge(int x, int y, int value){
  if ((x < size) && (y < size))
  {
    Neighbours[x][y] = value; Neighbours[y][x]=value;
  }
  else throw "Empty";
}

 List Graph::getNeighbours(int x){
   List neighbours;
  int j = 0;
  for(int i=0; i<size; ++i)
  {
    if (Neighbours[x][i]) {
      neighbours.add(i, j);
      ++j;
    }
  }
  return neighbours;
 }
