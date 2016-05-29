#include "Tree.hh"

Tree::Tree(){
Leaf.set_color(1);
Leaf.Parent=&Leaf;
Leaf.Right=&Leaf;
Leaf.Left=&Leaf;
Root=&Leaf;
}

int Tree::add(int element){
node* temp1,temp2;

temp1=new node;
temp1->element=element;
temp1->Left=&Leaf
temp1->Right=&Leaf;
temp1->Parent=Root;

if(temp1->Parent==&Leaf)
{
	Root=temp1
}
else
{
	if(temp1->element < temp1->Parent->element)
	{
		if(temp1->Parent->Left==&Leaf)
		{
			temp1->Parent->Left=temp1;
			break;
		}
	temp1->Parent=temp1->Parent->Left;
	}
	else
	{
	    if(temp1->Parent->Right==&Leaf)
	      {
		temp1->Parent->Right=temp1;
		break;
	      }
	    temp1->Parent=temp1->Parent->Right;
	}
	}

return 1;
}

node* Tree::find(int element){
	node* Temp;
	Temp=Root;
	while((Temp!=&Leaf)&& (Temp->element!=element))
		if(element < Temp->element)
		{
			Temp=Temp->Left;
		}
		else
		{
			Temp=Temp->Right;
		}
	if(Temp==&Leaf)
	{
		return 0;
	}
return Temp;
}

void Tree::Rotation_Left(node* rotation_point){
node* temp1;
node* temp2=rotation_point->Right;

if(temp2!=&Leaf)
		{
		temp1=rotation_point->Parent;
		rotation_point->Right=temp2->Left;
		if(rotation_point->Right!=&Leaf)
			rotation_point->Right->Parent=rotation_point;
		}

	temp2->Left=rotation_point;
	temp2->Parent=temp1;
	rotation_point->Parent=temp2;

	if(temp1!=&Leaf)
		{
		if(temp1->Left==rotation_point)
			temp1->Left=temp2;
		else
			temp1->Right=temp2;
		}
	else
		Root=temp2;
}

void Tree::Rotation_Right(node* rotation_point){
	node* temp1;
	node* temp2=rotation_point->Left;
	if(temp2!=&Leaf)
			{
			temp1=rotation_point->Parent;
			rotation_point->Left=temp2->Right;
			if(rotation_point->Left!=&Leaf)
				rotation_point->Left->Parent=rotation_point;
			}

		temp2->Right=rotation_point;
		temp2->Parent=temp1;
		rotation_point->Parent=temp2;

		if(temp1!=&Leaf)
			{
			if(temp1->Left==rotation_point)
				temp1->Left=temp2;
			else
				temp1->Right=temp2;
			}
		else
			Root=temp2;
}
