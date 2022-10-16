#include <iostream>
#include "BST.cpp"
using namespace std;

int main() {
    BST<int>mp;
    mp.insert(45);
    mp.insert(15);
    mp.insert(79);
    mp.insert(90);
    mp.insert(10);
    mp.insert(55);
    mp.insert(12);
    mp.insert(20);
    mp.insert(50);
    mp.insert(100);
    cout<<"Before: ";
    mp.traversal(mp.inOrder);
    mp.Delete(10);
    cout<<"\nAfter: ";
    mp.traversal(mp.inOrder);
}
