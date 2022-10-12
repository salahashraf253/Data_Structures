//
// Created by Salah Ashraf on 10/12/2022.
//

#ifndef STACK_USING_LINKED_LIST_STACK_H
#define STACK_USING_LINKED_LIST_STACK_H
template <class T>
class Node{
public:
    T value;
    Node<T>*next;
    Node(T value);
};

template <class T>
class Stack {
public:
    Node<T>*head;
    int ctr;
    Stack();
    T top();    //Time Complexity O(1)
    void push(T val);   //Time Complexity O(1)
    void pop(); //Time Complexity O(1)
    bool empty();   //Time Complexity O(1)
    int size(); //Time Complexity O(1)
    bool isFound(T val);    //Time Complexity O(N) as worst case
    ~Stack();
};


#endif //STACK_USING_LINKED_LIST_STACK_H
