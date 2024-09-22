// DoublyLinkedList.cpp
#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};
void printForwardTraversal(Node *curr)
{
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
void printBackwardTraversal(Node *curr)
{
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->prev;
    }
}
int main(){
    Node*  head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    
    head->next=second;
    second->prev=head;
    second->next=third;
    third->prev=second;
    
    cout<<"ForwardTraversal\n";
    printForwardTraversal(head);
    cout<<"BackwardTraversal\n";
    printBackwardTraversal(third);
}
