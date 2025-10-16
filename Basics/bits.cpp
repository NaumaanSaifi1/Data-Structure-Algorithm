#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<8> b(9); // it represents the number in binary format
    cout<<b<<endl; // it prints the binary representation of the number
    cout<<b.count()<<endl; // it returns the number of set bits
    cout<<b.size()<<endl; // it returns the size of the bitset
    cout<<b.none()<<endl; // it returns true if no bits are set
    cout<<b.any()<<endl; // it returns true if any bit is set
    cout<<b.test(2)<<endl; // it returns true if the bit at position 2 is set
    b.set(1); // it sets the bit at position 1
    cout<<b<<endl;
    b.reset(3); // it resets the bit at position 3
    cout<<b<<endl;
    b.flip(0); // it flips the bit at position 0
    cout<<b<<endl;
    cout<<b.to_ulong()<<endl; // it converts the bitset to unsigned long
    cout<<b.to_string()<<endl; // it converts the bitset to string
}