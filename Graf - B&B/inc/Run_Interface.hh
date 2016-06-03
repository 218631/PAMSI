#ifndef RUN_INTERFACE_HH
#define RUN_INTERFACE_HH

class Run{
public:
  virtual bool run()=0;
  virtual bool prepare(int)=0;
};

#endif
