//
// Created by Salah Ashraf on 10/12/2022.
//

#include "Stack.h"
#include <assert.h>
#include <iostream>
using namespace std;

template <class T>
Node<T>::Node(T val) {
    value=val;
    next=0;
}

template<class T>
Stack<T>::Stack() {
    head=NULL;
    ctr=0;
}
template<class T>
void Stack<T>::push(T val) {
    Node<T>* tmp=new Node<T>(val);
    if(!empty()){
        tmp->next=head;
    }
    head=tmp;
    ctr++;
}
template<class T>
T Stack<T>::top() {
    return head->value;
}
template<class T>
void Stack<T>::pop(){
    assert(!empty());
    head=head->next;
    ctr--;
}
template<class T>
bool Stack<T>::empty(){
    return ctr==0;
}
template<class T>
int Stack<T>::size() {
    return ctr;
}
template<class T>
bool Stack<T>::isFound(T val) {
    Node<T>*tmp=head;
    while (tmp != NULL){
        if(tmp->value==val)
            return true;
        tmp=tmp->next;
    }
    return false;
}
template<class T>
Stack<T>::~Stack<T>() {
    while (head){
        Node<T>* tmp=head;
        head=head->next;
        delete tmp;
    }
    ctr=0;
}
