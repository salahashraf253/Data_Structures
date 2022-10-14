//
// Created by Salah Ashraf on 10/14/2022.
//

#include "Queue.h"
#include <iostream>
#include "assert.h"
using namespace std;

template<class T>
Node<T>::Node(T value) {
    this->value=value;
    this->next=NULL;
}
template<class T>
Queue<T>::Queue() {
    ctr=0;
    front=rear=NULL;
}
template<class T>
void Queue<T>::enqueue(T val) {
    Node<T>*tmp=new Node<T>(val);
    if(isEmpty()){
        front=rear=tmp;
    }
    else{
        rear->next=tmp;
        rear=tmp;
    }
    ctr++;
}
template<class T>
void Queue<T>::dequeue() {
    assert(ctr!=0);
    front=front->next;
    ctr--;
}
template<class T>
T Queue<T>::peek() {
    assert(ctr!=0);
    return front->value;
}
template<class T>
int Queue<T>::size() {
    return ctr;
}
template<class T>
bool Queue<T>::isEmpty() {
    return ctr==0;
}
template<class T>
void Queue<T>::display() {
    cout<<"Displaying the Queue: \n";
    Node<T>*tmp=front;
    while (tmp !=0){
        cout<<tmp->value<<" ";
        tmp=tmp->next;
    }
    cout<<"\n";
}
template<class T>
bool Queue<T>::search(T val) {
    Node<T>*tmp=front;
    while (tmp){
        if(tmp->value==val){
            return true;
        }
        tmp=tmp->next;
    }
    return false;
}
template<class T>
void Queue<T>::clear() {
    while (!isEmpty()){
        dequeue();
    }
}
template<class T>
Queue<T>::~Queue<T>() {
    clear();
}
