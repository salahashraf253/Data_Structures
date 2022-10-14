//
// Created by Salah Ashraf on 10/14/2022.
//

#ifndef QUEUE_USING_LINKED_LISTS_QUEUE_H
#define QUEUE_USING_LINKED_LISTS_QUEUE_H

template<class T>
class Node{
public:
    T value;
    Node<T>*next;
    Node(T value);
};
template<class T>
class Queue {
private:
    Node<T>*front;
    Node<T>*rear;
    int ctr;
public:
    Queue();
    void enqueue(T val);    //Time Complexity O(1)
    void dequeue(); //Time Complexity O(1)
    T peek();   //Time Complexity O(1)
    bool isEmpty(); //Time Complexity O(1)
    void clear();   //Time Complexity O(N)
    void display(); //Time Complexity O(N)
    int size(); //Time Complexity O(1)
    bool search(T); //Time Complexity O(N)
    ~Queue();
};


#endif //QUEUE_USING_LINKED_LISTS_QUEUE_H
