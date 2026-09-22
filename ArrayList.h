//
// Created by Samuel on 9/17/26.
//

#ifndef UNTITLED1_ARRAYLIST_H
#define UNTITLED1_ARRAYLIST_H
#include <iostream>
#include <ostream>

template <typename T>
class arrayList {
    public:

    void add(T item) {}

    void deleteFront() {
        if (size==0) {
            return;
        }
    }

    void deleteBack() {
        
    }

    bool search(T item) {
        if (size==0) {
            return false;
        }
        for (int i = 0 ; i < size; i++) {
            if (data[i] == item) {
                return true;
            }
        }
        return false;
    }
};

#endif //UNTITLED1_ARRAYLIST_H
