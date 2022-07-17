//Author Name:Al-Fareed
//Reg No:210970049
//Date Of Creation:16-Mar-22
//Program Name:Program to display row major coumn
//------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
        int i,j,m,n,a[10][10],ar[100];
        cout<<"Enter the size of row and column:";
        cin>>m>>n;
        cout<<"Enter the elements:"<<endl;
        for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                        cin>>a[i][j];
                }
        }
        cout<<"Entered 2D matrix is:"<<endl;
        for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                        cout<<a[i][j]<<" ";
                }
                cout<<endl;
        }
        int k=0;
        cout<<"The Row major matrix is:\n";
        for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                        ar[k]=a[i][j];
                        cout<<ar[k]<<" ";
                        k++;
                }
        }

cout<<endl;
return 0;
}	
