//Author Name: Al-Fareed
//Reg No: 210970049
//Date of Creation:27-04-2022
//Program Name: Program To Implement Queue using arrays
//-----------------------------------------------------------------------------------
#include<iostream>
using namespace std;
void enqueue(int &front,int &rear,int q[],int &n)
{
        if(rear>=n-1)
        cout<<"\nOverflow:\n";
        else
        {
                int num;
                rear++;
                cout<<"Enter the element to be inserted in the queue:";
                cin>>num;
                q[rear]=num;
                cout<<"element "<< num <<"has been inserted successfully";
                if(front==-1)
                        front=0;
        }

}
void dequeue(int &front,int &rear,int q[],int &n)
{
        if(front==-1)
        cout<<"\nUnderFlow\n";
        else
        {
                int num=q[front];
                front++;
                cout<<"\nDeleted element is\n"<<num;
        }
}

void display(int &front,int &rear,int q[],int &n)
{
        if((front==-1) && (rear==-1))
        cout<<"\n Queue is empty\n";
        else
        {
                cout<<"The Elements of the Queue are:\n:";
                for(int i=rear;i>=front;i--)
                cout<<q[i]<<" ";
        }

}


int main()
{
        int n;
        int front=-1,rear=-1,choice;
        cout<<"\nEnter the Size of the queue:\n";
        cin>>n;
        int q[10];
        while(1)
        {
                cout<<"\n------QUEUE OPERATIONS--------\n";
                cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit";
                cout<<"\nEnter your Choice:";
                cin>>choice;
                switch(choice)
                {
                        case 1: enqueue(front,rear,q,n);
                                break;
                        case 2: dequeue(front,rear,q,n);
                                break;
                        case 3: display(front,rear,q,n);
                                break;
                        case 4: exit(0);
                                break;
                }
        }

}

