#ifndef TREE_HH
#define TREE_HH
#include "node.hh"

class Tree :public Interface_Tree{
node* Root;
node Leaf;
public:
Tree();
int add(int element);
node* find(int element);
void Rotation_Left(node* rotation_point);
void Rotation_Right(node* rotation_point);
};

#endif
