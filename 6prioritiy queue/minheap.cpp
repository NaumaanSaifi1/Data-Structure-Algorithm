#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>pq; // min heap
    pq.push(3); // it adds an element to the priority queue
    pq.emplace(4); // its faster than push as it constructs the element in place
    pq.push(2); // it adds an element to the priority queue
    cout<<pq.top()<<endl; // it returns the top element
    pq.pop(); // it removes the top element
    cout<<pq.size()<<endl; // it returns the size of the priority queue
}