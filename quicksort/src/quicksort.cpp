#include "quicksort.hh"

int quicksort::prepare(int *tab,int left, int right){
  return (left+(right-left))/2;
}

int quicksort::partition(int *tab,int left,int right){
  pivot=prepare(tab, left, right);
  p_value=tab[pivot];
  switch_tab(tab,pivot,right);
  current_position=left;
  int i;
  for(i=left;i<right-1;i++)
    {
      if(tab[pivot]<p_value)
	{
	  switch_tab(tab, pivot, current_position);
	  current_position++;
	}
    }
  switch_tab(tab,current_position,right);
  return current_position;
}

void quicksort::do_quicksort(int *tab,int left,int right){
  int i;
  while (left<right){
    i=partition(tab,left,right);
    if((i-left)<=(right-i))
      {
	do_quicksort(tab,left,i-1);
	left=i+1;
      }
    else
      {
	do_quicksort(tab,i+1,right);
	right=i-1;
      }
  }
}

void quicksort::switch_tab(int *tab,int index1,int index2){
  int temp;
  temp=tab[index1];
  tab[index1]=tab[index2];
  tab[index2]=temp;
 }
