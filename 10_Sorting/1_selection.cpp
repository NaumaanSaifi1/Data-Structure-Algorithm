#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of arr"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }

    //sorting

    for(int i=0;i<n-1;++i){
        for(int j=i;j<n;++j){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    //printing array
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}