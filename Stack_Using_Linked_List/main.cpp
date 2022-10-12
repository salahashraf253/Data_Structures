#include <iostream>
#include "Stack.cpp"
using namespace std;
int main() {
    Stack<int>st;
    for(int i=1;i<=5;i++){
        st.push(i);
    }
    cout<<"Size: "<<st.size()<<endl;
    cout<<"Top: "<<st.top()<<endl;
    st.pop();
    cout<<"Search for 3:"<<st.isFound(3)<<endl;
    cout<<"Search for 3423"<<st.isFound(3423)<<endl;

    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"\n";
}
