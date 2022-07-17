//Author Name: Al-Fareed
//Reg No: 210970049
// Date Of Creation:18-05-2022
// Program Name: Program To Create a sorted doubly linked list and perform the Operations
#include <iostream>
using namespace std;

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

void insertNode(node *head)
{
  struct node *newNode;
  newNode = (node *)malloc(sizeof(node));

  int element;
  cout << "\n Enter Element:";
  cin >> element;

  struct node *tempNode = head;
  struct node *prevNode = tempNode;
  newNode->data = element;

  if (head->next == NULL)
  {
    newNode->next = NULL;
    newNode->prev = NULL;
    head->next = newNode;
  }
  else
  {
    while (tempNode->next != NULL && tempNode->data < element)
    {
      prevNode = tempNode;
      tempNode = tempNode->next;
    }
    if (tempNode->next == NULL && tempNode->data < element)
    {
      newNode->next = NULL;
      newNode->prev = tempNode;

      tempNode->next = newNode;
    }
    else
    {
      newNode->next = tempNode;
      newNode->prev = tempNode->prev;

      prevNode->next = newNode;
      tempNode->prev = newNode;
    }
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
  cout << endl;
}

void displayForward(node *head)
{
  struct node *tempNode = head;
  cout << "\nForward Elements:";
  while (tempNode->next != NULL)
  {
    tempNode = tempNode->next;
    cout << tempNode->data;
    if (tempNode->next != NULL)
      cout << "->";
  }
  cout << endl;
}
void displayBackward(node *head)
{
  if (head->next == NULL)
  {
    cout << head->data << "->";
  }
  else
  {
    displayBackward(head->next);
    cout << head->data;
    if (head->prev != NULL)
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
    cout << "\n 1.Insert Element";
    cout << "\n 2.Delete Element";
    cout << "\n 3.Display Forward";
    cout << "\n 4.Display Backward";
    cout << "\n 5.Exit";
    cout << "\n Enter Choice:";
    cin >> choice;
    if (choice == 1)
      insertNode(head);
    else if (choice == 2)
      deleteNode(head);
    else if (choice == 3)
      displayForward(head);
    else if (choice == 4)
    {
      cout << "Backward Elements:";
      displayBackward(head->next);
      cout << endl;
    }

  } while (choice != 5);
  cout << endl;
}
