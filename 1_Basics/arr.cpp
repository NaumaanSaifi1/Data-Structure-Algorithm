#include<iostream>
using namespace std;

int main(){
    string s;
    s = "Naumaan";
    for(int i = 0; i<s.length(); ++i){
        if(s[i] == 'm'){
            cout<<i;
        break;
        }
        cout<<s[i]<<endl;
    }
}