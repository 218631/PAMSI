#ifndef INTERFACE_TREE_HH
#define INTERFACE_TREE_HH
#include "node.hh"

class Interface_Tree{
public:
virtual void add(int element)=0;
virtual node* find(int element)=0;
virtual void Rotation_Left(node* rotation_point)=0;
virtual void Rotation_Right(node* rotation_point)=0;
};

#endif
