#include<bits/stdc++.h>
using namespace std;
void func(int a[], int s,int p){
    if (p>s) return;
    else{ 
        swap(a[p], a[s]);
        func(a,s-1,p+1);
    }
}
int main(){
    int a[] = {1,2,3,4,5,6,7};
    int s = sizeof(a)/sizeof(a[0]);
    func(a,s-1,0);
}