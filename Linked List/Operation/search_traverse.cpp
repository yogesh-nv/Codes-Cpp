#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
void traversal(Node* head)
{
    Node* curr=head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
bool search(Node* head,int target)
{
    Node* curr=head;
    while(curr!=nullptr){
        if(curr->data==target)
            return true;
        curr=curr->next;
    }
    return false;
}
int main()
{
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    
    head->next=second;
    second->next=third;
    cout<<"traversal\n";
    traversal(head);
    cout<<"search 2\n"<<search(head,2)<<endl;
    return 0;
}
