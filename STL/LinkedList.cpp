#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void PrintList(Node *Head){
    while(Head != NULL){
        cout << Head->data <<" ";
        Head = Head->next;
    }
}

int main()
{
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;

    head->data = 20;
    head->next = second;
    second->data = 30;
    second->next = third;
    third->data = 40;
    third->next = fourth;
    fourth->data = 50;
    fourth->next = NULL;

    PrintList(head);
    delete head;

    
    return 0;
}