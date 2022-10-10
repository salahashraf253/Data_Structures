//
// Created by Salah Ashraf on 10/10/2022.
//

#include "Stack.h"
#include <iostream>
#include "assert.h"
using namespace std;

template <class T>
Stack<T>::Stack() {
    ctr=-1;
    size=2;
    arr= new T[size];
}
template<class T>
void Stack<T>::push(T value) {
    if(ctr==size)
        expand();
    arr[++ctr]=value;
}
template<class T>
void Stack<T>::pop() {
    assert(ctr!=-1);
    ctr--;
}
template<class T>
T Stack<T>::top() {
    assert(ctr!=-1);
    return arr[ctr];
}
template<class T>
int Stack<T>::length() {
    return ctr+1;
}
template<class T>
bool Stack<T>::isEmpty() {
    return ctr==-1;
}
template<class T>
void Stack<T>::expand() {
    cout<<"Expanding the size of stack\n";
    size*=2;
    T *tmp=new T[size];
    for(int i=0;i<=ctr;i++){
       tmp[i]=arr[i];
    }
    delete []arr;
    arr=tmp;
}
template<class T>
Stack<T>::~Stack<T>() {
    delete []arr;
}
