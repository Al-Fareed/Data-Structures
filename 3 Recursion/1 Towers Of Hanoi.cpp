//Author Name:Al-Fareed
//Reg No.:210970049
//Date Of Creation:16-Mar-22
//Program Name:Program to solve Towers of Hanoi
//------------------------------------------------
#include<iostream>
using namespace std;
void towers(int n,char source,char aux,char dest)
{
        if(n==1)
        {
                cout<<"move: "<<source <<" -> "<<dest<<"\n";
                return;
        }
        else
        {
                towers(n-1,source,dest,aux);
                cout<<"Move: "<<source<<" -> "<<dest<<endl;
                towers(n-1,aux,source,dest);
        }

}
int main()
{
        int n;
        cout<<"Enter the number of disk to be moved from Source->Destination:";
        cin>>n;
        towers(n,'A','B','C');
        return 0;
}