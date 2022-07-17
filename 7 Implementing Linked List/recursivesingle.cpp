//Author Name: Al-Fareed
//Reg No: 210970049
//-----------------------------------
#include<iostream>
using namespace std;

struct node {
int data;
struct node *next;
};

void insertNode(node *head) {
struct node *newNode;
newNode = (node*) malloc (sizeof(node));

int element;
cout<<"\nEnter Element:";
cin>>element;

struct node *tempNode = head;
newNode->data = element;

if(head->next == NULL) {
newNode->data = element;
newNode->next = NULL;
head->next = newNode;
} else {
while(tempNode->next != NULL) {
tempNode = tempNode->next;
}
newNode->next = tempNode->next;
tempNode->next = newNode;
}
}

void reverseNode(node *head){
if(head->next == NULL) {
cout<<head->data;
} else {
reverseNode(head->next);
cout<<"<-"<<head->data;
}
}

void displayNode(node *head) {
struct node *tempNode = head;
cout<<"\nList Elements:";
while(tempNode->next != NULL) {
tempNode = tempNode->next;
cout<<tempNode->data;
if(tempNode->next != NULL)
cout<<"->";
}
cout<<"Reverse of the list is:\n";
reverseNode(head->next);
}
int main() {
struct node *head;
head = (node*)  malloc (sizeof(node));
head->next = NULL;

int choice;
do {
cout<<"\n1.Insert Element\n2.Display\n3.Exit\nEnter Choice:";
cin>>choice;
if(choice == 1)
insertNode(head);
else if(choice == 2)
displayNode(head);
else 
cout<<"Invalid Input!";
} while(choice != 3);
cout<<endl;
}
