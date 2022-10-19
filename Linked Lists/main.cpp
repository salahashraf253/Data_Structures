#include <iostream>
#include "LinkedList.cpp"
using namespace std;

int main() {
    LinkedList <int> list;

    for(int i=1;i<=2;i++){
        list.push_back(i*10);
    }
    list.push_back(40);
    list.insertAt(2,30);
    list.insertAt(4,50);

    list.display(); //10 20 30 40 50

    list.deleteAt(3);  // 10 20 30 50
    list.deleteAt(3);  // 10 20 30

    list.push_front(50);    //50 10 20 30

    cout << list.front()<< endl; //50
    cout << list.back()<< endl;  //30
    cout << list.at(1)<< endl;   //10

    list.pop_back();  // 99 10 20
    list.pop_front(); // 10 20

    cout << list.front()<< endl; //10
    cout << list.back()<< endl;  //20
    cout << list.at(1)<< endl;   //20

}
