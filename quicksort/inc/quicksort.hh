#ifndef QUICKSORT_HH
#define QUICKSORT_HH

#include "tablica.hh"

class quicksort{
  int pivot_index;
  int pivot;
  int current_position;
public:
  int prepare(int*,int,int);
  int partition(int*,int,int);
  void do_quicksort(int*,int,int);
  void switch_tab(int*,int,int);
};

#endif
