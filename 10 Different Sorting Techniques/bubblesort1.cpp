//Author Name: Al-Fareed
//Reg No: 210970049
// Date of creations:04-06-2022
// Program Name: Program to Perfrom the Bubble Sort
#include<iostream>
using namespace std;
void bubble(int a[],int n)
{
    int i,j,temp;
    bool sorted=false;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                sorted=true;
            }
        }
//        if(sorted==false)
//        break;
    }
}
void printArr(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int i,j,a[20],n;
    cout<<"-------------BUBBLE SORT---------------";
    cout<<"\n Enter the Number of elements to be inserted";
    cin>>n;
    cout<<"\n Enter the array elements to be inserted";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"\n Before the Bubble sort\n";
    printArr(a,n);
    cout<<"\nAfter the Bubble sort\n";
    bubble(a,n);
    printArr(a,n);
    return 0;
}
