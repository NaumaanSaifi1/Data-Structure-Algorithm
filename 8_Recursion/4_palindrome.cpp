#include <bits/stdc++.h>
using namespace  std;
                    // bool palin(string n){
                    //     int i =0;
                    //     int s = n.size()-1;

                    //     while(i<s){
                    //         if(n[i]!=n[s]) return false;
                    //         i++;
                    //         s--;
                    //     }
                    //     return true;
                    // }
                    // int main(){
                    //     string n;
                    //     cin>>n;
                    //     cout<<palin(n);
                    // }

// Using recursion
bool palin(string name,int i,int s){
    if(i>=s) return 1;
    if(name[i]!= name[s]) return 0;
    return palin(name,i+1,s-1);
}
int main(){
    string name;
    //cin>>name;
    getline(cin,name);// reads entire line including spaces
    cout<<palin(name,0,name.size()-1);
    char n = tolower('N'); // lowers a char
    cout<<endl<<n<<endl;
    transform(name.begin(),name.end(),name.begin(),::tolower);
    cout<<name;

}