#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void printList(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n->next;
    }
    cout<<endl;
}

void rotate(Node** head, int k){
    if(k == 0){
        return ;
    }

    Node* current = *head;

    int count = 1;
    
    while (count<k && current != NULL){
        current = current->next;
        count++;
    }

    if(current==NULL){
        return ;
    }

    Node* knode = current;

    while(current->next!=NULL){
        current = current->next;
    }

    current->next = *head;
    *head = knode->next;
    knode->next = NULL;

    return ;
}

int main(){
    int k;
    Node* head;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    printList(head);

    rotate(&head,2);

    printList(head);
    return 0;
}