class Solution {
public:
    int trap(const vector<int>& height) {
        int l = 0, r = static_cast<int>(height.size()) - 1;
        int maxL = 0, maxR = 0;
        int res = 0;

        while (l < r) {
            if (height[l] < height[r]) {
                maxL = std::max(maxL, height[l]);
                res += maxL - height[l];
                ++l;
            } else {
                maxR = std::max(maxR, height[r]);
                res += maxR - height[r];
                --r;
            }
        }
        return res;
    }
};