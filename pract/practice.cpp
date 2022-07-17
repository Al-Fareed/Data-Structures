#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
void insert(node *head)
{
	struct node *newNode;
	newNode=(node *)malloc(sizeof(node));
	cout<<"Enter Element:";
	int ele;
	cin>>ele;
	newNode->data=ele;
	struct node *tempNode=head;
	if(head->next==NULL)
	{
		newNode->data=ele;
		newNode->next=NULL;
		head->next=newNode;
	}
	else
	{
		while(tempNode->next!=NULL)
		{
			tempNode=tempNode->next;
		}
		newNode->next=tempNode->next;
		tempNode->next=newNode;		
	}
}
void display(node *head)
{
	struct node *tempNode=head;
	if(head->next==NULL)
	{
		cout<<"MT";
	}
	else
	{
		while(tempNode->next!=NULL)
		{
			tempNode=tempNode->next;
			cout<<tempNode->data<<"->";
		}
		cout<<"NULL\n";
	}
}
void rem(node *head)
{
	struct node *tempNode=head;
	struct node *prevNode=tempNode;
	int ele;
	cout<<"Enter element to delte:";
	cin>>ele;
	while(tempNode->next!=NULL && tempNode->data<ele)
	{
		prevNode=tempNode;
		tempNode=tempNode->next;
		if(tempNode->data==ele)
		{
			prevNode->next=tempNode->next;
			cout<<"Deleted :"<<tempNode->data<<endl;
		}
		else
		{
			cout<<"No elements\n";
		}
	}
}
int main()
{
	struct node *head;
	head=(node *)malloc(sizeof(node));
	int ch;
	do{
		cout<<"\n1.Insert 2.Display 3.Delete:";
		cin>>ch;
		switch(ch)
		{
			case 1:insert(head);
					break;
			case 2:display(head);
					break;
			case 3:rem(head);
					break;
		}
		
	}while(ch!=0);
}
