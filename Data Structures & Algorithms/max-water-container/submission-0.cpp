class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = static_cast<int>(heights.size()) - 1;
        int best = 0;

        while(i < j)
        {
            best = std::max(best, (j - i) * std::min(heights[i], heights[j]));
            if(heights[i] < heights[j]) i++;
            else j--;
        }

        return best;
    }
};
