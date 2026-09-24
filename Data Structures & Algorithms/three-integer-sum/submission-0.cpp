class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        const int n = static_cast<int>(nums.size());
        vector<vector<int>> result;

        for (int i = 0; i < n - 2; ++i) {
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int k = i + 1, j = n - 1;
            const int target = -nums[i];
            while (k < j) {
                const int sum = nums[k] + nums[j];
                if (sum < target) ++k;
                else if (sum > target) --j;
                else {
                    result.push_back({nums[i], nums[k], nums[j]});
                    ++k; --j;
                    while (k < j && nums[k] == nums[k - 1]) ++k;
                    while (k < j && nums[j] == nums[j + 1]) --j;
                }
            }
        }
        return result;
    }
};