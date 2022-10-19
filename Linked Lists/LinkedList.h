//
// Created by Salah Ashraf on 10/19/2022.
//

#ifndef LINKED_LISTS_LINKEDLIST_H
#define LINKED_LISTS_LINKEDLIST_H

template <class T>
class Node{
public:
    T value;
    Node<T>*next;
    Node(T val);
};

template<class T>
class LinkedList {

public:
    int ctr=0;  //for elements
    Node<T>*head;
    Node<T>*tail;

    LinkedList();
    void push_front(T val);
    void push_back(T val);
    void insertAt(int pos,T val);
    void deleteAt(int pos);
    int size();
    void display();
    bool isEmpty();
    T at(int pos);
    T front();
    T back();
    void pop_front();
    void pop_back();
    ~LinkedList();
};


#endif //LINKED_LISTS_LINKEDLIST_H
