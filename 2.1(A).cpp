#include <iostream>
#include <vector>
#include <climits>
#include <cfloat>
#include <iomanip>
#include <stdio.h>
using namespace std;

struct Node{
    int data;
    struct Node *next = nullptr;
    struct Node *prev = nullptr;
}head;

void display (struct Node *head){
    struct Node *temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp->next != nullptr);
}

Node* left (struct Node *head, int n){
    if (head->next != nullptr){
        for(int i=0; i<n; i++){
            Node *temp1 = head, *temp = head;
            do{
                temp = temp->next;
            }while(temp->next != nullptr);
            temp->next = head;
            temp = temp->next;
            head = temp->next;
            temp->next = nullptr;
            head->prev = nullptr;
        }
    }
    return head;
}

Node* right(struct Node *head, int n){
    Node *temp = head;
    for(int i=0; i<n; i++){
        temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next=head;
        head->prev=temp;
        head = temp;
        head->prev = nullptr;
        (temp->prev)->next = nullptr;
    }
    return head;
}

void Delete (Node *head){
    Node *temp = head, *tmp1 = head;
    do{
        temp = temp->next;
        delete tmp1;
        tmp1= temp;
    }while(temp->next != nullptr);
    delete temp;
}

int main() {
    char c, a, b;
    struct Node *temp = &head, *temp1 = nullptr;
    do{
        cin>>temp->data;
        c = getchar();
        temp1 = temp;
        temp = new Node;
        temp1->next = temp;
        temp->prev = temp1;

    }while(c != '\n');
    int n;
    cin>>n>>a>>b;

    display(&head);

    if (b=='r' || b=='R'){
        temp = right(&head, n);
        display(temp);
    }
    else if (b=='l' || b=='L'){
        temp = left(&head, n);
        display (&head);
    }
    else{
        cout<<"Invalid";
    }

    Delete(&head);
    return 0;
}
