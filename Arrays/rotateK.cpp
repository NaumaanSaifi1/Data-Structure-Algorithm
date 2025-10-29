#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        vector<int> temp;
        for (int i = n - k; i < n; i++) {
            temp.push_back(nums[i]);
        }

        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }

        for (int i = 0; i < n; ++i) {
            cout << nums[i] << " ";
        }
    }
};
///OPTIMAL SOLUTIION 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateOP(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // handle if k > n

        // Correct syntax for reverse() with vector
        reverse(nums.begin(), nums.begin() + (n - k));
        reverse(nums.begin() + (n - k), nums.end());
        reverse(nums.begin(), nums.end());
    }
};


int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Solution obj;
    obj.rotate(arr, 3);
}
