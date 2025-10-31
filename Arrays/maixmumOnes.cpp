#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter array elements (0s and 1s): ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int count = 0;
    int maxi = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] == 1) {
            count++;
            maxi = max(maxi, count);
        } else {
            count = 0;
        }
    }

    cout << "Maximum consecutive 1s = " << maxi << endl;
    return 0;
}
