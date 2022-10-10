//
// Created by Salah Ashraf on 10/10/2022.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H

template<class T>
class Stack {
private:
    T * arr;
    int ctr;
    int size;

public:
    Stack();
    void push(T value); //Time complexity O(1) as best time & O(N) as worst time
    void pop();     //Time complexity O(1)
    T top();        //Time complexity O(1)
    int length();   //Time complexity O(1)
    bool isEmpty(); //Time complexity O(1)
    void expand();
    ~Stack();
};


#endif //STACK_STACK_H
