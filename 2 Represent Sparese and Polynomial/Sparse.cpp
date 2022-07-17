//Author Name:Al-Fareed
//Reg No:210970049
//Date Of Creation:9-Mar-22
//Program Name: Sparse Matrix program
//----------------------------------------------------
#include<iostream>
using namespace std;
struct sparse
{
        int r,c,val;
};
int main()
{
        int i,j,row,col,sm[10][10],count=0,a[10][10];
        cout<<"Enter the number of rows and columns:";
        cin>>row>>col;
                cout<<"Enter the elements:";
                for(i=0;i<row;i++)
                {
                        for(j=0;j<col;j++)
                        {
                                cin>>sm[i][j];
                                if(sm[i][j]!=0)
                                {
                                        count++;
                                }
                        }
                }
        cout<<"The Entered Matrix is:"<<endl;
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        a[i][j]=sm[i][j];
                        cout<<a[i][j]<<" ";
                 }cout<<endl;
        }
        int totel=((row*col)/2);
        cout<<"Count of non zero elements are:"<<count<<endl;
        if(count>totel)
        {
                cout<<"This is not a Sparse Matrix";
                exit(0);
        }
        sparse m[count+1];
        int k=1,val;
        cout<<"Row\tCol\tVal\n";
        m[0].r=row;
        m[0].c=col;
        m[0].val=count;
        for(i=0;i<row;i++)
        {
                for(j=0;j<col;j++)
                {
                        if(a[i][j]!=0)
                        {
                                m[k].r=i;
                                m[k].c=j;
                                m[k].val=a[i][j];
                                k++;
                        }
                }
        }
        for(i=0;i<count+1;i++){
cout<<m[i].r<<"\t"<<m[i].c<<"\t"<<m[i].val<<endl;
}

int p=1,arr[10][10];
for(i=0;i<m[0].r;i++)
{
        for(j=0;j<m[0].c;j++)
        {
                if(m[p].r==i && m[p].c==j)
                {
                        arr[i][j]=m[p].val;
                        p++;
                }
                else
                {
                        arr[i][j]=0;
                }
        }
}
                cout<<"The 2D matrix after mapping from triplet is:"<<endl;
for(i=0;i<row;i++)
{
        for(j=0;j<col;j++)
        {
                cout<<arr[i][j]<<" ";
        }
cout<<endl;
}
return 0;
}
