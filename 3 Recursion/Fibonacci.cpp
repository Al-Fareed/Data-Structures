//Author Name:Al-Fareed
//Reg No.:210970049
//Date Of Creation:16-Mar-22
//Program Name:Program to generate n Fibonacci series
//---------------------------------------------------------------
#include<iostream>
using namespace std;
int fib(int n)
{
int i;
i=n;
        if(n<=i)
        {
        if(n==0 || n==1)
        {
                return n;
        }
        else
        {
                return(fib(n-1)+fib(n-2));
        }
        }
}
int main()
{
        int num;
        cout<<"Enter the required number of Fibonacci series:";
        cin>>num;
        cout<<"The Fibonacci series are:";
        for(int i=0;i<=num;i++)
        {
                        if(i%5)
                        {

                                cout<<fib(i)<<" ";
                        }
                        else
                        {
                                cout<<fib(i)<<" ";
                        }
                }
        cout<<endl;
        return 0;
}
