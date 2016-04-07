#ifndef INTKOLEJKA_HH
#define INTKOLEJKA_HH

class intkolejka{
public:
  virtual int dlugosc()=0;
  virtual bool pusta()=0;
  virtual void zakolejkuj()=0;
  virtual int odkolejkuj()=0;
};

#endif
