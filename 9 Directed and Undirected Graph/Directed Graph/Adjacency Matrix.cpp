#include<iostream>
using namespace std;

int main() {
int arr[10][10],e,v;
system("clear");
cout<<"Enter number of vertices:";
cin>>v;

for(int i=0;i<v;i++) {
for(int j=0;j<v;j++) {
arr[i][j] = 0;
}
}
cout<<"Enter number of edges:";
cin>>e;

for(int i=0;i<e;i++) {
int a,b;
cout<<"Enter starting and ending edges:";
cin>>a>>b;

arr[a][b] = 1;
}

cout<<"Directed Adjacency Matrix:\n";
for(int i=0;i<v;i++) {
for(int j=0;j<v;j++) {
cout<<arr[i][j]<<" ";
}
cout<<endl;
}

cout<<endl;
}
