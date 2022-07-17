//Author Name: Al-Fareed
//Reg No: 210970049
// Date of creations:04-06-2022
// Program Name: Program to Perfrom the Selection Sort
#include <iostream>
using namespace std;
void selection(int a[],int n)
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			int temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
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
    int a[10], n, i, j;
    cout<<"---------SELECTION  SORT----------";
    cout << "\nEnter the number of elements:";
    cin >> n;
    cout << "\nEnter the array elemnets:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Before sorting array elements are - \n";
    printArr(a, n);
    selection(a, n);
    cout << "\nAfter sorting array elements are - \n";
    printArr(a, n);
    return 0;
}
