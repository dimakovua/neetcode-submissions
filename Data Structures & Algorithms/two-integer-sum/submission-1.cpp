class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_to_index;
        for(size_t i = 0; i < nums.size(); ++i)
        {
            num_to_index[nums[i]] = i;
        }
        int s;
        for(int i = 0; i < nums.size(); ++i)
        {
            s = target - nums[i];
            if(num_to_index.count(s))
            {
                if(i != num_to_index[s])
                {
                    return {i, num_to_index[s]};
                }
            }
        }
    }
};
