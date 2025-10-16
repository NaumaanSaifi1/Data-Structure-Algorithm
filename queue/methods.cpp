#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1); // it adds an element to the back of the queue
    q.emplace(2); // its faster than push as it constructs the element in place at the back
    q.push(3); // it adds an element to the back of the queue
    cout<<q.front()<<endl; // it returns the front element
    cout<<q.back()<<endl; // it returns the back element
    q.pop(); // it removes the front element
    cout<<q.size()<<endl; // it returns the size of the queue
    cout<<q.empty(); // it returns true if queue is empty else false
    q.back()+=5;
    cout<<endl<<q.back();}