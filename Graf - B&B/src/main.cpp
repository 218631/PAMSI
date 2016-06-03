#include "Run_Interface.hh"
#include <iostream>
#include "stoper.hh"
#include "BnB.hh"

using namespace std;

int main()
{
  int rozmiar=3;
  int tab[4]= {10, 100, 1000, 10000};

  Run* test= new BnB();
  stoper Stoper;
  for (int j = 0; j< rozmiar; ++j)
    {
      for(int i = 0; i < 10; ++i)
	{
    test->prepare(tab[j]);
	Stoper.start();
	test->run();
    Stoper.finish();
    Stoper.get_time();
	}
        cout << " -------" <<tab[j] <<"------- " << endl;
}
};
