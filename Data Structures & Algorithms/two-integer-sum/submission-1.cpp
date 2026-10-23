class Solution {
public:
       std::vector<int> twoSum(std::vector<int>& nums, int target) {
        
        std::unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); i++) {
            
            int complement = target - nums[i];
            
            if (numMap.find(complement) != numMap.end()) {
                
                // Construct and return a vector containing the two indices
                std::vector<int> result = {numMap[complement], i};
                return result;
            }
           numMap.insert({nums[i],i});
        }
        
        // Return an empty vector if no solution is found
        std::vector<int> emptyResult;
        return emptyResult;
    }
};
