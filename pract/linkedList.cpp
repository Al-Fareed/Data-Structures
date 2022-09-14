#include<iostream>
using namespace std;
int count=0;
struct Node{
    int data;
    struct Node *next;
};
int traverse(struct Node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
        count++;
    }
    return count;

}
int main(){
    struct Node *head=new struct Node;
    struct Node *first=new struct Node;
    struct Node *sec=new struct Node;
    struct Node *third=new struct Node;
	head->data=count;
    head->next=first;    

    first->data=11;
    first->next=sec;

    sec->data=22;
    sec->next=third;

    third->data=33;
    third->next=NULL;
    traverse(head);
    return 0;
}