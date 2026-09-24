class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> s(nums.begin(), nums.end());
        int best = 0;

        for(const auto& n : s)
        {
            if(s.count(n - 1)) continue;

            int len = 1;
            while(s.count(n + len)) ++len;

            best = std::max(best, len);
        }

        return best;
    }
};
