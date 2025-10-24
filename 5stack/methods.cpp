#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(1); // it adds an element to the top of the stack
    st.emplace(2); // its faster than push as it constructs the element in place at the top
    st.push(3); // it adds an element to the top of the stack
    st.top(); // it returns the top element
    st.pop(); // it removes the top element
    cout<<st.size(); // it returns the size of the stack
    cout<<st.empty(); // it returns true if stack is empty else false
    stack<int>s2;
    s2=st; // it copies the stack st to s2
    st.swap(s2); // it swaps the stack st and s2
    for(int i=0;i<st.size();i++){
        cout<<endl<<st.top();
        st.pop();
    }
    for(int i=0;i<s2.size();i++){
        cout<<endl<<s2.top();
        s2.pop();
    }

}