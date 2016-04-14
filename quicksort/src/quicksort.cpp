#include "quicksort.hh"

int quicksort::prepare(int *tab,int left, int right){
  return left+(right-left)/2;
}

int quicksort::partition(int *tab,int left,int right){
  pivot_index=prepare(tab, left, right);
  pivot=tab[pivot_index];
  switch_tab(tab,pivot_index,right);
  current_position=left;
  for(int i=left;i<right;i++)
    {
      if(tab[i]<=pivot)
	{
	  switch_tab(tab, i, current_position);
	  current_position++;
	}
    }
  switch_tab(tab,current_position,right);
  return current_position;
}

void quicksort::do_quicksort(int *tab,int left,int right){
  if (left < right) {
    int i = partition(tab, left, right);
    do_quicksort(tab, left, i - 1);
    do_quicksort(tab, i + 1, right);
  }
}

void quicksort::switch_tab(int *tab,int index1,int index2){
  int temp;
  temp=tab[index1];
  tab[index1]=tab[index2];
  tab[index2]=temp;
 }
