class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::set<int> s(nums.begin(), nums.end());
        if (s.empty()) return 0;

        int best = 1, cur = 1;
        auto it = s.begin();
        int prev = *it;
        for (++it; it != s.end(); ++it) {
            cur = (*it - prev == 1) ? cur + 1 : 1;
            best = std::max(best, cur);
            prev = *it;
        }
        return best;
    }
};
