class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const size_t n = nums.size();
        std::vector<int> result(n, 1);

        std::exclusive_scan(nums.begin(), nums.end(), result.begin(), 1, std::multiplies<>{});

        int suffix = 1;
        for (size_t i = n - 1; i > 0; --i) {
            result[i] *= suffix;
            suffix *= nums[i];
        }
        result[0] *= suffix;

        return result;
    }
};