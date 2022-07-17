#include<iostream>
using namespace std;
class post
{
	int stack[10];
		public:
			int top,d;
	void push(int data)	
	{
			for(int i=0;i<5;i++){
		if(top==5)
		{
			cout<<"Overflow";
		}
		else
		{
				
			top=top+1;
			stack[top]=data;
		
			}
		}
			cout<<"Inserted:"<<data<<endl;
	}
	void pop()
	{
			for(int i=0;i<5;i++){
		if(top==-1)
		{
			cout<<"Underflow\n";
		}
		else
		{
			d=stack[top];
			top=top-1;
			
		}
	}cout<<"Poped:"<<d<<endl;;
}
void display()
{
	int p;
	for(int i=0;i<5;i++)
	{
		p=stack[top];
	}
	cout<<p<<endl;
}
};
int main()
{
	int d,r,ch,t=-1;
	post p;
	do{
	cout<<"1.Enter 2.Delete 3.Display top..?:";
	cin>>ch;
	if(ch==1)
	{
	cout<<"Enetr data to be inserted:";
	cin>>d;
	p.push(d);
	}
	else if(ch==2)
	{
	p.pop();
	}
	else if(ch==3)
	{
		p.display();
	}
	else
	{
		exit(0);
	}
	}while(ch!='0');
	return 0;
}
