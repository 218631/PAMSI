#include "FindPath.hh"

Find_path::Find_path(int size){
Visited = new bool[size+1];
 graph = new Graph(size);
 size = size;
}

int Find_path::get_size(){
  return size;
}

Find_path::~Find_path(){
  delete Visited;
  delete graph;
}

void Find_path::Add_Vertex(int vertex_number)
{
	graph->add_vertex(vertex_number);
}

void Find_path::Add_Link(int first,int second)
{
	graph->add_link(first,second);
}

list Find_path::Neighbours_List(int vertex_number){
return graph->neighbours_list(vertex_number);
}

bool Find_path::Is_Neighbour(int first, int second){
	return graph->is_neighbour(first,second);
}

void Find_path::DFS(int one, int two){
  Visited[one]=true;
  for(int i=0;i<get_size();i++)
    if((graph->neighbours_list(one).get(two)==two)&&!Visited[i])
      DFS(i,two);
}


void Find_path::BFS(int one, int two){
  node *queue, *head, *tail;

  queue = new node;
  queue->next=0;
  queue->element=one;
  head=tail=queue;
  
  Visited[one]=true;

  while(head){
    one=head->element;
    queue=head;
    head=head->next;
    if(!head)
      tail=0;
    delete queue;
    
    for(int i =0; i < get_size(); i++)
      if((graph->neighbours_list(one).get(two)==two)&&!Visited[i])
	{
	  queue=new node;
	  queue->next=0;
	  queue->element=i;
	  if(!tail)
	    head=queue;
	  else
	    tail->next=queue;
	  tail=queue;
	  Visited[i]=true;
	}
  }
}
