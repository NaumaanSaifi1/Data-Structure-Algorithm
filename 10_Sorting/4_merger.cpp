#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low , int mid , int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i<=high;++i){
        arr[i] = temp[i-low];
    }
}
void mergesort(vector<int> &arr, int left, int high){
    if(left>=high) return;
    int mid = left + (high - left) / 2;
    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, high);
    merge(arr,left,mid,high);
}
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        arr.push_back(x);
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}