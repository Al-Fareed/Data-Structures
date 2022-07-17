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
                        if(i>=j)
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
                        if(i>=j)
                        {
                                a1[k]=a[i][j];
                                cout<<a1[k]<<"\t";
                                k++;
                        }
                }
        }
        cout<<"\nEnter the Location of the 2d matrix to find the element:\n";
        cin>>i>>j;
        if(i>=j)
        {
        	int offset=(i*(i+1)/2+j);
        	cout<<"The element is " <<a1[offset]<<endl;
    	}
    	else
    	cout<<"The element is " <<0<<endl;
        return 0;
}
