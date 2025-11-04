#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;  // value -> index mapping
        
        for (int i = 0; i < nums.size(); ++i) {
            int comp = target - nums[i]; // complement

            if (hash.find(comp) != hash.end()) {
                return {hash[comp], i};  // we can return immediately after finding
            }

            // store current value with its index
            hash[nums[i]] = i;
        }

        return {-1,-1};  //no solution 
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = sol.twoSum(nums, target);
    
    if (result[0] != -1) {
        cout << "Indices found: [" << result[0] << ", " << result[1] << "]" << endl;
        cout << "Numbers: " << nums[result[0]] << " + " << nums[result[1]] << " = " << target << endl;
    } else {
        cout << "No solution found!" << endl;
    }
    
    return 0;
}
