class Solution {
public:
    int maxArea(const vector<int>& heights) {
        int i = 0, j = static_cast<int>(heights.size()) - 1;
        int best = 0;

        while (i < j) {
            const int hi = heights[i], hj = heights[j];
            const int h = std::min(hi, hj);
            best = std::max(best, (j - i) * h);

            if (hi < hj) { while (i < j && heights[i] <= h) ++i; }
            else { while (i < j && heights[j] <= h) --j; }
        }
        return best;
    }
};