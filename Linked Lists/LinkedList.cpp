//
// Created by Salah Ashraf on 10/19/2022.
//

#include "LinkedList.h"
#include "assert.h"
#include <iostream>
using namespace std;
template<class T>
Node<T>::Node(T val) {
    this->value=val;
    this->next=0;
}

template<class T>
LinkedList<T>::LinkedList() {
    head=tail=0;
    ctr=0;
}
template<class T>
bool LinkedList<T>::isEmpty(){
    return ctr==0;
}
template<class T>
void LinkedList<T>::push_front(T val) {
    Node<T>*newNode=new Node<T>(val);
    if(isEmpty()){
        head=tail=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
    ctr++;
}
template<class T>
void LinkedList<T>::push_back(T val) {
    Node<T>*newNode=new Node<T>(val);
    if(isEmpty()){
        head=tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
    ctr++;
}
template<class T>
void LinkedList<T>::insertAt(int pos, T val) {
    assert(pos>=0 && pos<=ctr);
    if(pos==ctr){
        push_back(val);
        return;
    }

    Node<T>*newNode=new Node<T>(val);
    Node<T>*tmp=head;
    for(int i=0;i<pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    ctr++;

}
template<class T>
void LinkedList<T>::display() {
    Node<T>*tmp=head;
    while (tmp!=0){
        cout<<tmp->value<<" ";
        tmp=tmp->next;
    }
    cout<<"\n";
}
template<class T>
int LinkedList<T>::size() {
    return ctr;
}
template<class T>
void LinkedList<T>::deleteAt(int pos) {
    assert(pos>=0 && pos<ctr);
    Node<T>*tmp=head;
    if(pos==0){
        head=head->next;
        delete tmp;
    }
    else{
        for(int i=0;i<pos-1;i++){
            tmp=tmp->next;
        }
        Node<T>*deletedNode=tmp->next;
        tmp->next=deletedNode->next;
        if(pos==ctr-1){
            tail=tmp;
        }
        delete deletedNode;
    }
    ctr--;
}
template<class T>
T LinkedList<T>::at(int pos) {
    Node<T>*tmp=head;
    for(int i=0;i<ctr;i++){
        if(i==pos)break;
        tmp=tmp->next;
    }
    return tmp->value;
}
template<class T>
T LinkedList<T>::front() {
    assert(head!=0);
    return head->value;
}
template<class T>
T LinkedList<T>::back() {
    assert(tail!=0);
    return tail->value;
}
template<class T>
void LinkedList<T>::pop_front() {
    deleteAt(0);
}
template<class T>
void LinkedList<T>::pop_back() {
    deleteAt(ctr-1);
}
template<class T>
LinkedList<T>::~LinkedList<T>() {
    while(!isEmpty())
        pop_back();
}