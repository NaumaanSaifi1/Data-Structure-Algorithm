#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.emplace_back(3);
    v.emplace_back(4);

// iterator using auto keyword
/*    auto it = v.begin();
    for(it;it!=v.end();it++){
        cout<<*it<<endl;
    }
*/ 

    for(auto it:v){
        cout<<endl<<it;
    }

// to erase a value
    v.erase(v.begin());     // erase first element
    v.erase(v.begin(),v.begin()+2); // will delete first and second elemennt leaving the third one i.e. begin()+2
}