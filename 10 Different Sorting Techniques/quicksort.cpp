//Author Name: Al-Fareed
//Reg No: 210970049
// Date of creations:04-06-2022
// Program Name: Program to Perfrom the Quick Sort
#include <iostream>
using namespace std; 
void swap(int &a, int &b) 
{ 
    int t = a; 
    a = b; 
    b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];   
    int i = (low - 1);   
   
    for (int j = low; j <= high- 1; j++) 
    { 
        if (arr[j] <= pivot) 
        { 
            i++;   
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 
   
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pivot = partition(arr, low, high); 
        quickSort(arr, low, pivot - 1); 
        quickSort(arr, pivot + 1, high); 
    } 
} 
   
void displayArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
} 
   
int main() 
{ 
    int arr[10],n,i; 
    cout<<"---------QUICK SORT--------------"<<endl;
    cout<<"\nEnter the number of array elements to be sorted:";
    cin>>n;
    cout<<"\nEnter the array elements:";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"\nBefore the Quick sort,the array is:";
    displayArray(arr,n);
    cout<<endl;
    quickSort(arr, 0, n-1); 
    cout<<"\nAfter the quick sort, the sorted array is"<<endl; 
    displayArray(arr,n); 
    return 0; 
}
