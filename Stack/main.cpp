#include <iostream>
#include "Stack.cpp"
using namespace std;

int main() {
    Stack<int>st;
    for(int i=1;i<=5;i++){  //initialize the stack
        st.push(i);
    }
    cout<<"Size: "<<st.length()<<"\n";
    while (!st.isEmpty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
