#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {32,12,22,13,3};
    int largest = arr[0];
    int slargest = -1;
    for(int i =0;i<5;++i){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]< largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    cout<<slargest;
}