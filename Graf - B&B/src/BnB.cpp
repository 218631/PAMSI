#include "BnB.hh"
#include <climits>
#include <queue>
#include <cmath>
#include <iostream>

void BnB::printNeighbours(){
  for (int i = 0; i < size; ++i)
  {
    for(int j = 0; j < size; ++j)
      cout<< Neighbours[i][j]<<" ";
    cout << endl;
  }
}

int BnB::BandB(int start, int stop){
  int best = INT_MAX;
  int interator=0;
  int son=0, parent=0, value=0;
  std::queue<int>* parents = new queue<int>;
  std::queue<int>* sons = new queue<int>;
  std::queue<int>* values = new queue<int>;
  sons -> push (start);
  parents -> push(start);
  values -> push(0);
  while(!parents->empty())
  {
    son = sons -> front();
    sons->pop();
    value = values -> front();
    values-> pop();
    parent = parents ->front();
    parents->pop();
    for (int i = 0; i< size; ++i)
    {
     if((Neighbours[son][i] > 0)&&(i!=parent))
      {
        if(value < best)
        {
          interator++;
          sons -> push(i);
          values -> push(Neighbours[i][son]+value);
          parents -> push(son);
          if ((i == stop) && (Neighbours[i][son]+value < best ))
            {
	      best = value + Neighbours[i][son];
            }
        }
      }
    }
  }
  std::cout << "rozwinięcia:" << interator << endl;
  delete sons; delete parents; delete values;
  return best;
}



int BnB::BnB_ExtendedList(int start, int stop){
  int best = INT_MAX;
  int interator=0;
  int son=0, parent=0, value=0;
  std::queue<int>* parents = new queue<int>;
  std::queue<int>* sons = new queue<int>;
  std::queue<int>* values = new queue<int>;
  sons -> push (start);
  parents -> push(start);
  values -> push(0);
  while(!parents->empty())
    {
      son = sons -> front();
      sons->pop();
      value = values -> front();
      values->pop();
      parent = parents -> front();
      parents->pop();
      for (int i = 0; i< size; ++i)
	{
	  if((Neighbours[son][i] > 0)&&(i!=parent))
	    {
	      if(value < best)
		{
		  interator++;
		  sons -> push(i);
		  values -> push(Neighbours[i][son]+value);
		  parents -> push(son);
		  if ((i == stop) && (Neighbours[i][son]+value < best ))
		    {
		      best = value + Neighbours[i][son];
		    }
		  if (i!=stop)
		    {
		      Neighbours[son][i]=0;
		      Neighbours[i][son]=0;
		    }
		}
	    }
	}
    }
  std::cout << "rozwinięcia:" << interator << endl;
  /*for(int i=0; i< size;++i)
     delete[] NeighboursBNB[i];
  delete[] NeighboursBNB;*/
  delete sons; delete parents; delete values;
  return best;
}

bool BnB::prepare(int new_size)
{
for(int i = 0; i< size; ++i)
free(Neighbours[i]);
  free(Neighbours);
  Neighbours=NULL;
  Neighbours = new int* [new_size];
  for (int i = 0; i < new_size; ++i)
  Neighbours[i] = new int [new_size];
  size = new_size; path_length = new_size;
  for (int i =0; i<new_size; ++i)
  {
    for (int j=i; j<new_size; ++j)
    {

      Neighbours[j][i] = rand() %10;
      Neighbours[i][j] = Neighbours[j][i];
    }
  }
  return true;
}

bool BnB::run(){
  if(BnB_ExtendedList(rand()%path_length, rand()%path_length)!=INT_MAX)
    return true;
    else
    return false;
  }

