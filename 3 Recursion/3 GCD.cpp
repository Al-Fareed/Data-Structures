//Author Name:Al-Fareed
//Reg No.:210970049
//Date Of Creation:23-Mar-22
//Program Name:Program to find the GCD of the given two number
//------------------------------------------------------------
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
        if(b==0)
        {
                return a;
        }
        else if(a==0)
        {
                return b;
        }
        else
        {
                return gcd(b,a%b);
        }
}
int main()
{
        int a,b;
        cout<<"Enter the value for a and b:";
        cin>>a>>b;
        cout<<"The gcd of two numbers are:"<<gcd(a,b);
        cout<<endl;
        return 0;
}
