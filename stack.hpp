//
// Created by 虞跃 on 2018-09-27.
//

#ifndef COMP_3512_LAB3_STACK_HPP
#define COMP_3512_LAB3_STACK_HPP

const int MAX = 10;

class stack {
private:
    int top;
    int arr [MAX];
public:
    stack();
    bool push(int);
    void pop();
    int getTop() const;
    bool isEmpty() const;


};

#endif //COMP_3512_LAB3_STACK_HPP
