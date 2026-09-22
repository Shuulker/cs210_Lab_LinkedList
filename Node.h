//
// Created by Samuel on 9/17/26.
//

# pragma once

template <typename T>
class Node {

public:
    T *value;
    Node<T> *next;

    Node(T *value) {
        // . is for belongs to -> is for pointing to
        this->value = value;
        next=nullptr;
    }

    void print() {
        cout<<value<<endl;
    }

};