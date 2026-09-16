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

void insertAtPosition(Node*&Tail,Node * & head,int position, int d){\
    if(position == 1){
        InsertionAtHead(head,d);
        return ;
    }
  Node * temp = head ;
  int cnt = 1;
    while(cnt < position -1){
        temp = temp -> next ;
        cnt ++ ;
    }
    if(temp->next == NULL){
        InsertionAtTail(Tail,d);
    }
    // creating a new node for d
    Node * nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next ;

    temp -> next =nodeToInsert ;
}

void deleteNode(int position, Node* &head) {
    
    // Case 1: delete head
    if(position == 1) {
        Node* temp = head;     // store old head
        head = head->next;     // move head to next
        temp->next = NULL;     // detach
        delete temp;           // free memory
        return;
    }

    // Case 2: delete from middle/end
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt < position) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    // Now curr is the node we want to delete
    prev->next = curr->next;  // skip the node
    curr->next = NULL;        // detach
    delete curr;              // free memory
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

insertAtPosition(tail,head,3,22);
print (head);
insertAtPosition(tail,head,4,89);
print(head);
insertAtPosition(tail,head,1,45);
print(head);
insertAtPosition(tail,head,8,1);
print(head);
cout << "Deleting the number" << endl;
deleteNode(5,head);
print(head);
return 0 ;
}

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public :
//     int data;
//     Node *next;

//     Node(int d) {
//         data = d;
//         next = NULL;
//     }
// };

// // INSERT AT HEAD
// void insertAtHead(Node* &Head, int d) {
//     Node* temp = new Node(d);
//     temp->next = Head;
//     Head = temp;
// }

// // INSERT AT TAIL
// void insertAtTail(Node* &Tail, int d) {
//     Node* temp = new Node(d);
//     Tail->next = temp;
//     Tail = temp;
// }

// // INSERT AT ANY POSITION (between nodes)
// void insertAtPosition(Node* &Head, Node* &Tail, int position, int d) {

//     // Case 1: Insert at head
//     if (position == 1) {
//         insertAtHead(Head, d);
//         return;
//     }

//     Node* temp = Head;
//     int cnt = 1;

//     while (cnt < position - 1 && temp->next != NULL) {
//         temp = temp->next;
//         cnt++;
//     }

//     // Case 2: Insert at tail
//     if (temp->next == NULL) {
//         insertAtTail(Tail, d);
//         return;
//     }

//     // Case 3: Insert in middle
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert->next = temp->next;
//     temp->next = nodeToInsert;
// }

// void print(Node* Head) {
//     Node* temp = Head;

//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {

//     Node* node1 = new Node(10);

//     Node* Head = node1;
//     Node* Tail = node1;

//     print(Head);

//     insertAtTail(Tail, 12);
//     print(Head);

//     insertAtTail(Tail, 15);
//     print(Head);

//     insertAtPosition(Head, Tail, 2, 99); // Insert 99 between 10 and 12
//     print(Head);

//     insertAtPosition(Head, Tail, 1, 5); // Insert at head
//     print(Head);

//     insertAtPosition(Head, Tail, 10, 100); // Insert at tail if pos > length
//     print(Head);

//     return 0;
// }
