//
// Created by Samuel on 9/17/26.
//

#pragma once
#include <iostream>
#include <ostream>

#include "Node.h"

template <typename T>
class LinkedList {
public:
    Node<T> *head;
    //Node<T> *tail;
    int size;

    // if you want to force one element
    LinkedList(T *value) {
        Node<T> *temp = new Node<T>(value);
        head = temp;
        size = 1;
    }
    // if you want to make an empty one
    LinkedList() {
        head = nullptr;
        size = 0;
    }
    // this is an example of overloading

    void print() {
        Note<T> *temp1 =head;
        while (temp1 != nullptr) {
            cout << temp1->print()<< endl;
            temp1 = temp1->next;
        }
    }

    void append(T *value) {
        Node<T> *newnode = new Node<T>(value);
        if (head == nullptr) {
            head = newnode;
            size++;
            return;
        }
        tail->next = newnode;
        tail = tail->next;
        size++;
    }

    void deleteAppend(T *value) {}
};
