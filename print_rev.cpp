#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printList(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

Node* printreverse(Node* head){
    
    Node* subsequent = NULL;
    Node* current = head;
    Node* previous = NULL;

    while (current != NULL){
        subsequent = current->next;
        current->next = previous;
        previous = current;
        current = subsequent;
    }

    return previous;
}

int main(){
    Node* head;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    printList(head);

    head = printreverse(head);

    printList(head);

    return 0;
}