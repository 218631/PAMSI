#ifndef NODE_HH
#define NODE_HH

class node{
  int element;
  node* Left;
  node* Right;
  node* Parent;
  bool Is_Black;
  friend class list;
public:
 bool set_color(int color)
{
	 if(color==1)
		return Is_Black=true;
	 else
		return Is_Black=false;
}
};

#endif
