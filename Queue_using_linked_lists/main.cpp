#include <iostream>
#include "Queue.cpp"
using namespace std;
int main() {
    Queue<int>q;
    q.enqueue(1);
    q.dequeue();
    q.enqueue(2);
    cout<<q.peek();
}
