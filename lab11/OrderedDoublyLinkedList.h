#ifndef ORDEREDDOUBLYLINKEDLIST_H
#define ORDEREDDOUBLYLINKEDLIST_H

#include <iostream>
using namespace std;

struct DoublyNode {
    int data;
    DoublyNode* next;
    DoublyNode* prev;
    DoublyNode(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class OrderedDoublyLinkedList {
private:
    DoublyNode* head;
    DoublyNode* tail;

public:
    OrderedDoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insertOrdered(int newData) {
        DoublyNode* newNode = new DoublyNode(newData);

        if (!head) {
            // If the list is empty, set head and tail to the new node
            head = tail = newNode;
        } else if (newData <= head->data) {
            // Insert at the beginning if new data is smallest
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        } else if (newData >= tail->data) {
            // Insert at the end if new data is largest
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        } else {
            // Find the correct position for insertion
            DoublyNode* current = head;
            while (current->next && current->next->data < newData) {
                current = current->next;
            }
            newNode->next = current->next;
            newNode->prev = current;
            current->next->prev = newNode;
            current->next = newNode;
        }
    }

    void printForward() {
        DoublyNode* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void printBackward() {
        DoublyNode* current = tail;
        while (current) {
            cout << current->data << " ";
            current = current->prev;
        }
        cout << endl;
    }
};

#endif
