//Author Name: Al-Fareed
//Reg No: 210970049
//Date Of Creation:27-04-2022
//Program Name: Program To implement Circular queues using arrays
//----------------------------------------------------------------------------------
#include<iostream>
using namespace std;
void enqueue(int &front,int &rear,int q[],int &n)
{
        if(front==(rear+1)%n)
                cout<<"\nOverflow\n";
        else
        {
                if(front==-1)
                        front=rear=0;
                else
                        rear=(rear+1)%n;
                        cout<<"\n Enter the element that has to be inserted to the queue\n:";
                        int num;
                        cin>>num;
                        q[rear]=num;
                }
}
void dequeue(int &front,int &rear,int q[],int &n)
{
        if(front==-1)
                cout<<"\nUnderFlow\n";
        else
        {
                int num=q[front];
                if(front==rear)
                        front=rear=-1;
                else
                        front=(front+1)%n;
                cout<<"The element deleted from the queue is: "<< num<<endl;
        }
}
void display(int &front,int &rear,int q[],int &n)
{
        if((front==-1) && (rear==-1))
                cout<<"\n Queue is empty\n";
        else
        {
                cout<<"The Elemenets in the queue is\n";
                int i;
                if(front>rear)
                {
                        for(i=front;i<=rear;i++)
                                cout<<q[i]<<" ";
                }
                else
                {
/*                      for(i=front;i<=n;i++)
                        cout<<q[i];*/
                        for(i=0;i<=rear;i++)
                                cout<<q[i];
                }
        }
}
int main()
{
        int front=-1,rear=-1;
        int choice;
        cout<<"Enter the number of elements in the circular queue:";
        int n;
        cin>>n;
        int q[n];
        while(1)
        {
                cout<<"---------------CIRCULAR QUEUE OPERATIONS-----------";
                cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Display\n";
                cout<<"\nEnter the choice:";
                cin>>choice;
                switch(choice)
                {
                        case 1: enqueue(front,rear,q,n);
                                break;
                        case 2: dequeue(front,rear,q,n);
                                break;
                        case 3: display(front, rear, q,n);
                                break;
                        case 4: exit(0);
                                break;

                }
        }
}

