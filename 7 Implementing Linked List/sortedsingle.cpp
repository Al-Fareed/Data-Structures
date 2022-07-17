//Author Name: Al-Fareed
//Reg No: 210970049
// Date Of Creation:11-05-2022
// Program Name: Program to Implement a Sorted Singly Linked List and Perfrom the Operations
//-------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

struct node
{ 
  int data;
  struct node *next;
};

void insertNode(node *head)
{
  struct node *newNode;
  newNode = (node *)malloc(sizeof(node));

  int element;
  cout << "\nEnter Element:";
  cin >> element;

  struct node *tempNode = head;
  newNode->data = element;

  if (head->next == NULL)
  {
    newNode->data = element;
    newNode->next = NULL;
    head->next = newNode;
  }
  else
  {
    while (tempNode->next != NULL && tempNode->next->data < element)
    {
      tempNode = tempNode->next;
    }
//    newNode->next = tempNode->next;
//    tempNode->next = newNode;
  }
}
void deleteNode(node *head)
{
  struct node *tempNode = head;
  struct node *prevNode = tempNode;

  if (tempNode->next == NULL)
  {
    cout << "\nList is Empty:";
  }
  else
  {
    int element, found = 0;
    cout << "\nEnter Element to be deleted:";
    cin >> element;

    while (tempNode->next != NULL && tempNode->data < element)
    {
      prevNode = tempNode;
      tempNode = tempNode->next;
      if (element == tempNode->data)
        found = 1;
    }
    if (found)
    {
      prevNode->next = tempNode->next;
      cout << "\nElement " << tempNode->data << " Deleted";
    }
    else
    {
      cout << "\nElement Not Found:";
    }
  }
}

void displayNode(node *head)
{
  struct node *tempNode = head;
  cout << "\nList Elements:";
  while (tempNode->next != NULL)
  {
    tempNode = tempNode->next;
    cout << tempNode->data;
    if (tempNode->next != NULL)
      cout << "->";
  }
}
int main()	
{
  struct node *head;
  head = (node *)malloc(sizeof(node));
  head->next = NULL;

  int choice;
  do
  {
    cout << "\n1.Insert Element\n2.Delete Element\n3.Display\n4.Exit\nEnter Choice:";
    cin >> choice;
    if (choice == 1)
      insertNode(head);
    else if (choice == 2)
      deleteNode(head);
    else if (choice == 3)
      displayNode(head);

  } while (choice != 4);
  cout << endl;
}
