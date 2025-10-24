#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.emplace_back(4);  //better than push_back
//    cout<<v[1];
    vector<pair<int,int>>vec;


// iterators:

    vector<int>::iterator it = v.begin();
    cout<<*it * 3;
    it++;
    cout<<endl<<*it;
}