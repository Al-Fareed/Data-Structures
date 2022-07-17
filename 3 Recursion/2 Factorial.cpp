//Author Name:Al-Fareed
//Reg No.:210970049
//Date Of Creation:16-Mar-22
//Program Name:Program to calculate Factorial of given number
//---------------------------------------------------------------
#include<iostream>
using namespace std;
int fact(int n)
{
        if(n==0)
        {
                return 1;
        }
        else
        {
                return(n*fact(n-1));
        }
}
int main()
{
        int num;
        cout<<"Enter the number:";
        cin>>num;
        cout<<"The Factorial of the given number is:"<<fact(num);
        cout<<endl;
        return 0;
}
