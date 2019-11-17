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

void insertbegining(Node** headref, int x){
    Node* new_node = new Node(x);
    new_node->next = *headref;
    *headref = new_node;
}

void print(Node* n){
    while(n != NULL){
        cout<< n->data<< " ";
        n = n->next;
    }
    cout<< endl;
}

int main(){
    Node* head;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    print(head);
    insertbegining(&head, 0);
    print(head);
    return 0;
}
