//Author Name: Al-Fareed
//Reg No:210970049
//Date of creation: 2-Mar-2022
//Program name: Program to create 2d uppertriangular matrix and map into 1D array and display the searched element
//-----------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
        int a[10][10],i,j,m,n,k;
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
                        if(i>j)
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
                        if(i<=j)
                        {
                                a1[k]=a[i][j];
                                cout<<a1[k]<<"\t";
                                k++;
                        }
                }
        }
        cout<<"\nEnter the Location of the element to be searched:\n";
        cin>>i>>j;
        int offset=((n*i)+j-(i*(i+1)/2));
        cout<<"The element is " <<a1[offset]<<endl;
        return 0;
}

