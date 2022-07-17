//Author Name: Al-Fareed
//Reg No: 210970049
// Date of creations:04-06-2022
// Program Name: Program to Perfrom the Insertion Sort
#include<iostream>
using namespace std;
void insertion(int a[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while((j>=0) && t<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
        i+1;
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
    cout<<"---------INSERTION SORT----------";
    cout<<"\nEnter the number of elements to be inserted ";
    cin>>n;
    cout<<"\nEnter the array elements to be inserted";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"\n Before the insertion sort";
    printArr(a,n);
    cout<<"\n After the Insertion sort:";
    insertion(a,n);
    printArr(a,n);
    return 0;
}
