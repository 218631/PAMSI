#include "Graph.hh"
#include "list.hh"
#include "stoper.hh"
#include "FindPath.hh"
#include <iostream>
#include <stdio.h>
#include <cstdlib>

//Wykorzystanie elementów losowych, powoduje
//"Segmentation fault" w niektórych przypadkach.

using namespace std;

#define SIZE 10

int main(){

  Find_path graph(SIZE);

  for(int i=0;i<SIZE;i++)
    graph.Add_Vertex(i);

  for(int i=1;i<SIZE;i++)
    graph.Add_Link(i-1,i);
  graph.Add_Link(SIZE-1,0);

  for(int i=1;i<(SIZE/10);i++)
    graph.Add_Link(i,rand()%SIZE);
  
  stoper Stoper;

  int x=rand()%SIZE;

  Stoper.start();
  graph.DFS(3,x);
  Stoper.finish();
  Stoper.get_time();

  Stoper.start();
  graph.BFS(3,x);
  Stoper.finish();
  Stoper.get_time();
  

 return 0;
}
