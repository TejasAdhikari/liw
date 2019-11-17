#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};

/*void printList(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n->next;
    }
}*/

int getsize(Node* head){
    Node* temp = head;
    int length = 0;
    while (temp!= NULL)
    {
        temp = temp->next;
        length++; 
    }
    return length;
}

int getnfromend (Node* head, int n){

    int size= getsize(head);

    if(n>size)
        return -1;
    
    Node* first = head;
    Node* second = head;

    while (n--)
    {
        first = first->next;

    }
    
    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    return second->data;
} 

int main(){
    int n= 2;
    Node* head;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next=new Node(5);
    cout<<  getnfromend(head, n)<< endl;
    //printList(head);
    return 0;
}