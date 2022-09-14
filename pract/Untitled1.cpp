#include<iostream>
using namespace std;
void insertion(int a[],int n)
{
	int i,j,t;
	for(int i=0;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while((j>=0)&&(t<a[j]))
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
		i+1;
	}
}
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		
			cout<<a[i]<<"\t";
	}	
}
int main()
{
	cout<<"Enter the number of elements:";
	int n,a[10];
	cin>>n;
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Elements inserted are:";
	display(a,n);
	cout<<"\nAfter sorting:\n";
	insertion(a,n);
	display(a,n);
}
