#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter input string";
    cout<<endl;
    cin>>s;
    cout<<endl;
    //precompute;

    int hash[26] = {0};
    for(int i = 0;i<s.size();++i){
        hash[s[i]-'a']++;    
    }
    cout<<endl;

    int q;
    cout<<"enter the number of rep you want"<<endl;
    cin>>q;
    //fetch
    while(q--){
    char c;
    cout<<"enter char";
    cout<<endl;    
    cin>>c;
    cout<< hash[c-'a'];
    cout<<endl;
    }
    return 0;
}