#include <bits/stdc++.h>
using namespace std;
int main(){
    
    deque<int> dq;
    dq.push_back(2); // it adds an element to the back of the deque
    dq.emplace_back(3); // its faster than push_back
    dq.push_front(1); // it makes a copy of the element and then add it to the front
    dq.emplace_front(0); // its faster than push_front

    for(auto it:dq){
        cout<<endl<<it;
    }

    dq.pop_back(); // it removes the last element
    dq.pop_front(); // it removes the first element
    cout<<endl<<"After popping"<<endl;
    for(auto it:dq){
        cout<<endl<<it;
    }

    dq.back(); // it returns the last element
    dq.front(); // it returns the first element
    dq.back()+=5; // it adds 5 to the last element
}