//
// Created by Salah Ashraf on 10/16/2022.
//

#ifndef BINARY_TREE_BST_H
#define BINARY_TREE_BST_H
template<class T>
class Node{
public:
    T value;
    Node<T>*left;
    Node<T>*right;
    Node();
    Node(T val);
};

template<class T>
class BST {
private:
    Node<T>*root;
    void preOrderTraversal(Node<T>*root);
    void inOrderTraversal(Node<T>*root);
    void postOrderTraversal(Node<T>*root);
    Node<T>* deleteNode(Node<T>*tmp,T val);
    Node<T>* findNode(T val);
public:
     enum Traversal{
        preOrder,inOrder,postOrder
    };
    BST();
    void insert(T val);
    Node<T>* insertWithNode(Node<T>*,T);

    void traversal(Traversal type);
    bool contains(T val);   //Time complexity O(N) as worst case (when the tree is unbalanced)
    Node<T>* findParent(T val);
    int getLevel(T val);
    T getMin();
    T getMax();
    void Delete(T val);
    bool Search(T val);
};


#endif //BINARY_TREE_BST_H
