//Author Name: Al-Fareed
//Reg No:210970049
//Date of creation: 2-Mar-2022
//Program name: Program to create create a 2d tridiagonal matrix and map into 1D array and display the searched element
//-----------------------------------------------------------------------------------------------------------
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
        int a[10][10],i,j,m,n,k=0;
        int a1[100];
        cout<<"Enter the Size of the Matrix:"<<endl;
        cin>>m>>n;
        if(m!=n)
        {
                cout<<"The given Matrix is not a Square Matrix."<<endl;
                exit(0);
        }
        cout<<"Enter the elements of the Matrix:"<<endl;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(abs(i-j)>1)
                        {
                                a[i][j]=0;
                        }
                        else

                                cin>>a[i][j];
                }
        }
        cout<<"The Entered Matrix is:"<<endl;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        if((i==j)||(i==j-1)||(i==j+1))
                        {
                                a1[k]=a[i][j];
                                cout<<a1[k]<<"\t";
                                k++;
                        }
                }
        }
        cout<<"\nEnter the address of 2d array element which has to be present in the 1D array:"<<endl;
        cin>>i>>j;
        int offset=(2*i+j);
        cout<<"The address is"<<a1[offset]<<endl;
        return 0;
}

