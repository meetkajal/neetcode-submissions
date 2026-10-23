class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int comp;

        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            comp = target - nums[i];

            if (mp.find(comp) != mp.end()) {
                return {mp[comp], i+1};
            }
            mp.insert({nums[i], i+1});
        }
        return {};
    }
};
