//Author Name: Al-Fareed
//Reg No: 210970049
//----------------------------------
#include <iostream>
using namespace std;

struct Node
{
int data;

Node *link;
};

Node *top = NULL;

bool isempty()
{
 if(top == NULL)
 return true; else
 return false;
}

void push (int value)
{
  Node *ptr = new Node();
  ptr->data = value;
  ptr->link = top;
  top = ptr;
}

void pop ( )
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
 {
  Node *ptr = top;
  top = top -> link;
  delete(ptr);
 }
}

void displayStack()
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
 {
  Node *temp=top;
  while(temp!=NULL)
  {   cout<<temp->data<<" ";
   temp=temp->link;
  }
  cout<<"\n";
 }
 }

int main()
{

 int choice, flag=1, value;

 while( flag == 1)
 {
 cout<<"\n1.Push 2.Pop 3.displayStack 4.exit\n";
 cin>>choice;
 switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         push(value);
         break;
 case 2: pop();
         break;
 case 3: displayStack();
         break;
 case 4: flag = 0;
         break;
 }
 }

return 0;
}

