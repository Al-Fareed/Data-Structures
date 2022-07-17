//-----diagonal.cpp---------------------------------------------
#include<iostream>
using namespace std;
int main()
{
        int a[10][10],i,j,n,k=0;
        int a1[100];
        cout<<"Enter the Size of the Matrix:"<<endl;
        cin>>n;
        cout<<"Enter the elements of the Matrix:"<<endl;
        for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(i==j)
                        {
                                cin>>a[i][j];
                        }
                        else
                        a[i][j]=0;
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
                        if(i==j)
                        {
                                a1[k]=a[i][j];
                                cout<<a1[k]<<"\t";
                                k++;
                        }
                }
        }
        int p,q;
        cout<<"\nEnter the Location of the 2d matrix to find the element:\n";
        cin>>p>>q;
        int numerator=(p*(p+1));
        int denominator=(2+q);
        int offset=(numerator/denominator);
        if(p==q)
        {
        	cout<<"The element is "<<a1[offset+1]<<endl;
		}
        else
        cout<<"The element is 0\n";

        return 0;
}
