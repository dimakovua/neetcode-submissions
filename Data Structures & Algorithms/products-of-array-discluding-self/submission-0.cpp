class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const size_t n = nums.size();
        std::vector<int> result(n, 1);

        for (size_t i = 1; i < n; i++)
            result[i] = result[i-1] * nums[i-1];

        int suffix = 1;
        for (size_t i = n - 1; i > 0; --i) {
            result[i] *= suffix;
            suffix *= nums[i];
        }
        result[0] *= suffix;
        
        return result;
    }
};