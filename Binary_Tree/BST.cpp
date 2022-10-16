//
// Created by Salah Ashraf on 10/16/2022.
//

#include "BST.h"
#include "assert.h"
#include <iostream>
using namespace std;


template<class T>
Node<T>::Node(T val) {
    this->value=val;
    left=right=NULL;
}
template<class T>
Node<T>::Node (){
    value=NULL;
    left=right=NULL;
}
template<class T>
BST<T>::BST() {
    root=0;
}
template<class T>
void BST<T>::insert(T val) {
    assert(!contains(val));
    root=insertWithNode(root,val);
//    cout<<"Insert is Done\n";
}
template<class T>
Node<T>* BST<T>::insertWithNode(Node<T> *current,T val) {
    if(current ==0){
        Node<T>*newNode=new Node<T>(val);
        current=newNode;
    }
    else{
//        cout<<current->value<<"\n";
        if(val < current->value)
            current->left=insertWithNode(current->left,val);
        else {
            current->right = insertWithNode(current->right, val);
        }
    }
    return current;
}
template<class T>
Node<T>* BST<T>::findNode(T val) {
//    cout<<"Search for "<<val<<" : ";
    Node<T>*tmp=root;
    while (tmp!=0){
        if(tmp->value==val)
            break;
        else if(tmp->value < val)
            tmp=tmp->right;
        else tmp=tmp->left;
    }
    return tmp;
}
template<class T>
void BST<T>::traversal(Traversal type) {
    if(type==inOrder){
        inOrderTraversal(root);
    }
    else if(type==preOrder){
        preOrderTraversal(root);
    }
    else postOrderTraversal(root);
}
//left root right
template<class T>
void BST<T>::inOrderTraversal(Node<T> *root) {
    if(root ==0)return;
    inOrderTraversal(root->left);
    cout<<root->value<<" ";
    inOrderTraversal(root->right);
}
//root left right
template<class T>
void BST<T>::preOrderTraversal(Node<T> *root) {
    if(root ==0)return;
    cout<<root->value<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
// left right root
template<class T>
void BST<T>::postOrderTraversal(Node<T> *root) {
    if(root ==0)return;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    cout<<root->value<<" ";
}
template<class T>
bool BST<T>::contains(T val) {
   return findNode(val);
}
template<class T>
Node<T>* BST<T>::findParent(T val) {
    Node<T>*tmp=root;
    assert(contains(val));
    while (1){
        if(tmp->right->value==val || tmp->left->value==val){
            return tmp;
        }
        else if(val < tmp->value)tmp=tmp->left;
        else tmp=tmp->right;
    }
}
template<class T>
int BST<T>::getLevel(T val) {
    assert(contains(val));
    int lvl=0;
    Node<T>*tmp=root;
    while (tmp->value != val){
        lvl++;
        if(val < tmp->value)tmp=tmp->left;
        else tmp=tmp->right;
    }
    return lvl;
}
template<class T>
T BST<T>::getMin() {
    Node<T>*minNode=root;
    while (minNode->left !=0){
        minNode= minNode->left;
    }
    return minNode->value;
}
template<class T>
T BST<T>::getMax() {
    Node<T>*maxNode=root;
    while (maxNode->right!=0){
        maxNode= maxNode->right;
    }
    return maxNode->value;
}
template<class T>
Node<T>* BST<T>::deleteNode(Node<T>*tmp,T val) {
//    if(tmp==0)return NULL;  //Empty tree
//    Node<T>*tmp= findNode(val);

}
template<class T>
bool BST<T>::Search(T val) {
    return findNode(val) !=0 ? 1:0;
}
template<class T>
void BST<T>::Delete(T val) {
    if(root ==0)return;
    Node<T>*tmp= findNode(val);
    if(tmp==0)return;   //node is not found
    if(! tmp->left && ! tmp->right ){  //leaf node with no children
        if(tmp==root)root=0;
        else{
            Node<T>*parent= findParent(val);
            if(parent->value < val)parent->right=0;
            else parent->left=0;
        }
        delete tmp;
    }
    else if( ! tmp->left && tmp->right ){   //leaf node with right child only
        Node<T>*parent= findParent(val);
        if(parent == root){
            root=tmp->right;
        }
        else{
            if(parent->value > val)
                parent->left=tmp->right;
            else parent->right=tmp->right;
        }
        delete tmp;
    }
    else if( tmp->left && ! tmp->right){    //leaf node with left child only
        Node<T>*parent= findParent(val);
        if(parent == root){

        }
    }
}