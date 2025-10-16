#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<8> b; // it creates a bitset of size 8
    b.set(1); // it sets the bit at index 1 to 1
    b.set(4); // it sets the bit at index 4 to 1
    cout<<b<<endl; // it prints the bitset
    cout<<b.count()<<endl; // it returns the number of set bits
    cout<<b.size()<<endl; // it returns the size of the bitset
    cout<<b.test(4)<<endl; // it returns true if the bit at index 4 is set
    cout<<b.none()<<endl; // it returns true if no bits are set
    b.flip(); // it flips all the bits
    cout<<b<<endl; // it prints the bitset
    b.reset(); // it resets all the bits to 0
    cout<<b<<endl; // it prints the bitset
}