#include <bits/stdc++.h>
using namespace std;
vector<int> qs
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    qs(arr,0,n-1);
}