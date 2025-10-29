#include <bits/stdc++.h>
using namespace std;
vector<int>UnionOfArray(vector<int> &a1,vector<int> &a2){
    int n1= a1.size();int n2 = a2.size();
    int i, j = 0;
    vector<int> result;
    while(i<n1 && j <n2){
        if(a1[i]<=a2[j]){
            if(result.size()==0 || result.back()!= a1[i]){
                result.push_back(a1[i]);
            }
            i++;
        }
        else
        {if(result.size()==0 || result.back()!= a2[j]){
                result.push_back(a2[j]);
            }
            j++; 
        }
    }
     while (i < n1) {
        if (result.empty() || result.back() != a1[i])
            result.push_back(a1[i]);
        i++;
    }
    while (j < n2) {
        if (result.empty() || result.back() != a2[j])
            result.push_back(a2[j]);
        j++;
    }
    return result;
}
int main(){
    vector<int> a1;
    vector<int> a2;
    vector<int> result = UnionOfArray(a1, a2);  // ✅ capture the returned vector

    // ✅ print the result
    cout << "Union of arrays: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}