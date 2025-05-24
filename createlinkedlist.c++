#include<iostream>
using namespace std;

class node
{
public:
int data;
node* next;

node(int value)
{
    data=value;
    next=NULL;
}
};

int main()
{
    node* head= new node(10);
    head->next= new node(20);
    head->next->next= new node(30);

    node* temp=head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    return 0;
}