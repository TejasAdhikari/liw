#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;

    }
};
void printList(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

bool has_loop(Node* head){
    if(head == nullptr){
        return false;
    }

    Node* slow = head;
    Node* fast = head->next;

    while (fast != slow){
        if(fast == nullptr or fast->next == nullptr){
            return false;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    //if reached here then fast is equal slow
    return true;
}

void removeloop(Node* head){
    if(head == nullptr || head == nullptr){
        return ;
    }

    Node* slow = head->next;
    Node* fast = head->next->next;

    while (fast != slow){
        if(fast == nullptr or fast->next == nullptr){
            return ;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    //if reached here then fast is equal slow

    slow = head;
    while(slow != fast){
        fast = fast->next;
        slow = slow->next;
    }
    //if reached here we are at the intersection point
    while(fast->next != slow){
        fast = fast->next;
    }
    fast->next=NULL;

}

int main(){
    int n= 2;
    Node* head;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next=new Node(5);

    head->next->next->next->next->next= head->next->next;

    if(has_loop(head)){
        cout<<"loop has been detected"<<endl;
    }
    else{
        cout<<"loop has not been detected"<<endl;
    }


    removeloop(head);

    printList(head);

    return 0;
}