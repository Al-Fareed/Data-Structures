//Author Name: Al-Fareed
//Reg No: 210970049
//---------------------------------------
#include <iostream>
using namespace std;
struct Node
{
int data;

Node *link;
};

Node *front = NULL;
Node *rear = NULL;

bool isempty()
{
 if(front == NULL && rear == NULL)
 return true;
 else
 return false;
}

void enqueue ( int value )
{
 Node *ptr = new Node();
 ptr->data= value;
 ptr->link = NULL;

 if( front == NULL )
 {
  front = ptr;
  rear = ptr;
 }
 else
 {
  rear ->link = ptr;
  rear = ptr;
 }
}

void dequeue ( )
{
 if( isempty() )
 cout<<"Queue is empty\n";
 else

 if( front == rear)
 {
  free(front);
  front = rear = NULL;
 }
 else
 {
  Node *ptr = front;
  front = front->link;
  free(ptr);
 }
}

void displayQueue()
{
 if (isempty())
  cout<<"Queue is empty\n";
 else
 {
  Node *ptr = front;
  while( ptr !=NULL)
  {
   cout<<ptr->data<<" ";
   ptr= ptr->link;
  }
 }
}

int main()
{
 int choice, flag=1, value;
 while( flag == 1)
 {
  cout<<"\n1.enqueue \n2.dequeue\n3.displayQueue\n4.exit\n";
  cin>>choice;
  switch (choice)
  {
  case 1: cout<<"Enter Value:\n";
          cin>>value;
          enqueue(value);
          break;
  case 2: dequeue();
          break;
  case 3: displayQueue();
          break;
  case 4: flag = 0;
          break;
  }
 }

 return 0;
}