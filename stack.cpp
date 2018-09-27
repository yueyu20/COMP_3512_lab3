//
// Created by 虞跃 on 2018-09-27.
//
#include "stack.hpp"
#include <iostream>

using namespace std;

stack::stack() {
    top = -1;

}

bool stack::push(int x) {
    if (top > MAX) {
        cout << "Stack Overflow";
        return false;
    } else{
        arr[++top] = x;
        cout << "pushed into stack\n";
        return true;
    }
}

void stack::pop() {
    if(top < 0) {
        cout << "Stack Underflow";
    } else {
        --top;
    }
}

int stack::getTop() const {
    int x = arr[top];
    return x;
}

bool stack::isEmpty() const {
    return (top < 0);
}

bool stack::isFull() const {
    return (top == MAX);
}

void stack::print() const{
    for(int i = 0; i < MAX; i++) {
        cout << arr[i] << " ";
    }
}