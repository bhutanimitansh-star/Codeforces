#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        data = d;
        prev = NULL;
        next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node*& head, Node*& tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    } else {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node*& tail, Node*& head, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void InsertAtPosition(Node*& tail, Node*& head, int position, int d){
    if(position == 1){
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1){
        temp = temp->next;
        cnt++;
    }

    // insert at tail
    if(temp->next == NULL){
        insertAtTail(tail, head, d);
        return;
    }

    Node* newNode = new Node(d);
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void deleteNode(int position, Node*& head){
    if(position == 1){
        Node* temp = head;
        head = temp->next;
        if(head != NULL)
            head->prev = NULL;

        temp->next = NULL;
        delete temp;
        return;
    }

    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;

    while(cnt < position){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;

    if(curr->next != NULL)
        curr->next->prev = prev;

    curr->next = NULL;
    curr->prev = NULL;
    
    delete curr;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 13);
    print(head);
    insertAtHead(head, tail, 12);
    print(head);
    insertAtHead(head, tail, 11);
    print(head);
    insertAtTail(tail, head, 15);
    print(head);
    InsertAtPosition(tail, head, 3, 100);

    print(head);

    deleteNode(4, head);
    print(head);

    return 0;
}
