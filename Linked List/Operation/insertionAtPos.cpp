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

Node* insertAtEnd(Node* head, int value)
{
    // Create a new node with the given value
    Node* newNode = new Node(value);

    // If the list is empty, make the new node the head
    if (head == nullptr)
        return newNode;

    // Traverse the list until the last node is reached
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    // Link the new node to the current last node
    current->next = newNode;
    return head;
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
    traversal(insertAtEnd(head,10));
    return 0;
}
