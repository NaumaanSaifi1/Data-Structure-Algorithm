#include <bits/stdc++.h>
using namespace std;
int longesSubarrayWithSumK(vector<int> a, long long k){
    map<long long , int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0 ; i<a.size();++i){
        sum += a[i];
        if(sum == k){
            maxLen = max(maxLen,i+1);
        }
        int rem = sum -k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i-preSumMap[rem];
            maxLen = max(maxLen,len);
        }
        preSumMap[sum] = i;
    }
    return maxLen;
}

// https://www.youtube.com/watch?v=frf7qxiN2qU&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=20
//bakchod topic just watch video