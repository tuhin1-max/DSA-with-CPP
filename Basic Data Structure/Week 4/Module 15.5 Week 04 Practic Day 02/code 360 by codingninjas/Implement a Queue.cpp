#include <bits/stdc++.h> 
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class Queue {
public:
    Node* head = NULL;
    Node* tail = NULL;

    Queue() {
        
    }


    bool isEmpty() {
        if(head==NULL){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        Node* newnode = new Node(data);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }

        tail->next = newnode;
        tail = newnode;
    }

    int dequeue() {
        if(head==NULL){
            return -1;
        }

        Node* deletenode = head;
        int val = head->data;
        head = head->next;
        delete deletenode;

        if(head==NULL){
            tail = NULL;
        }

        return val;
    }

    int front() {
        if(head==NULL){
            return -1;
        }
        
        return head->data;
    }
};