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
}

void reverselist(Node** head_ref){
    
    Node* temp1 = NULL;
    Node* temp2 = *head_ref;
    Node* temp3 = NULL;

    
    temp3 = temp3->next->next;
    temp1->next = NULL;

    while(temp3 != NULL){
        //changing links
        temp3 = temp2->next;
        temp2->next = temp1;

        //incrementing pointers

        temp1= temp2;
        temp2= temp3;
    }

    //fix your* head_ref
   * head_ref = temp1;
}

int main(){
    Node* head;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    printList(head);

    reverselist(&head); 

    printList(head);

    return 0;
}