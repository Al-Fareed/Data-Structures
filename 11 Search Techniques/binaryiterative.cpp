//Author Name: Al-Fareed
//Reg No: 210970049
//Date of Creation:06-06-2022
//Program Name:Program to Search the element using Binary Search(iterative method)

#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
	int size,x;
	cout<<"----BINARY SEARCH(ITERATIVE METHOD)---------";
	cout<<"\n Enter the number of elements:";
	cin>>size;
	int array[size];
	cout<<"\nEnter the array Elemenets:\n";
	for(int i=0;i<size;i++)
	cin>>array[i];
	cout<<"\n Enter the Element that Has to be searched:\n";
	cin>>x;
  int result = binarySearch(array, x, 0, size - 1);
  if (result == -1)
    cout<<"\nElement Not Found:";
  else
   cout<<"\n Element is Found at "<<result<<" index";
}
