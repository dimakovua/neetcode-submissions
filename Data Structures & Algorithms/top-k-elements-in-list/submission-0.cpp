class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> count_nums; //nums -> app
        for(const auto& num : nums)
        {
            count_nums[num]++;
        }
        std::vector<std::vector<int>> buckets(nums.size() + 1);

        for(const auto& [num, count] : count_nums)
        {
            buckets[count].push_back(num);
        }

        std::vector<int> res(k);
        int idx = 0;
        for (unsigned i = buckets.size(); i-- > 0; )
        {
            for (unsigned j = buckets[i].size(); j-- > 0; )
            {
                res[idx++] = buckets[i][j];
                if(idx == k) return res;
            }
        }
        return res;
    }
};