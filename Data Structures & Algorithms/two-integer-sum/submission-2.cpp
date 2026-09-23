class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> prevMap; // num to idx
        
        for(int i = 0; i < nums.size(); i++)
        {
            int difference = target - nums[i];
            if(prevMap.find(difference) != prevMap.end())
            {
                return {prevMap[difference], i};
            }
            prevMap.insert({nums[i], i});
        }
        return {};
    }
};
