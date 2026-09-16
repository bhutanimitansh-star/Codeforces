#include <bits/stdc++.h>
using namespace std;

class Node {
    public :
    int data ;
    Node * next ;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
// insertion od new node 
void InsertionAtTail(Node*&Tail, int d){
    Node*temp = new Node(d);
    Tail -> next  = temp;
    Tail = Tail -> next;
}
void InsertionAtHead(Node*&head , int d){
    Node*temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtPosition(Node* & head ,int position, int d){
    Node * temp = head;
    int cnt = 1;

    while(cnt < position -1){
        temp = temp -> next ;
        cnt ++ ;
    }
    Node * nodeToInsert = new Node(d);

    nodeToInsert = new Node(d);

    temp -> next =nodeToInsert ;
}

void print(Node *&Head){
    Node * temp = Head;

    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl ;
}

int main(){
Node * node1 = new Node(10) ;
// cout << node1 -> data << endl;
// cout << node1 -> next << endl ;

Node *head = node1;
Node*tail = node1;
print (head);

InsertionAtHead(head,5);
print(head);
InsertionAtTail(tail,12);
print (head);
InsertionAtTail(tail, 15);

print(head);

return 0 ;
}