class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;  // value -> index mapping
        // vector<int> res;

        for (int i = 0; i < nums.size(); ++i) {
            int comp = target - nums[i]; // complement

            if (hash.find(comp) != hash.end()) {
                // // found the pair
                // res.push_back(hash[comp]);
                // res.push_back(i);
                return {hash[comp],i};  // we can return immediately after finding
            }

            // store current value with its index
            hash[nums[i]] = i;
        }

        return {-1,-1};  // empty if not found
    }
};
