#include<iostream>
using namespace std;

int main() {
int i,v,e,j,count;

cout<<"Enter number of vertexes:";
cin>>v;
cout<<"\nEnter number of edges:";
cin>>e;

int edge[e][2];
for(int i=0;i<e;i++) {
cout<<"Enter the vertex pair for egde:";
cout<<"\nV(1):";
cin>>edge[i][0];
cout<<"V(2):";
cin>>edge[i][1];
}
cout<<"\nThe Adjacency list representation for given graph:";
for(int i=0;i<v;i++) {
count = 0;
cout<<"\n\t"<<i+1<<"-> {";
for(j=0;j<e;j++) {
if(edge[j][0] = i+1) {
cout<<edge[j][1]<<" ";
count++;
} else if(edge[j][1] == i+1) {
cout<<edge[j][0]<<" ";
count++;
} else {
cout<<"Isolated vertex:";
}
}
cout<<" }";
}
cout<<endl;
}