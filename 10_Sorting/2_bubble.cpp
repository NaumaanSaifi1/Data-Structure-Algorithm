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
    for(int i=n-1;i>=0;i--){
        int didswap = 0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap++;
            }
        }
        if(didswap==0) break;
    }
    //printing array
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}