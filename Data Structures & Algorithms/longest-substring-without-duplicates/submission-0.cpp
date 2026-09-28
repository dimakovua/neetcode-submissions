class Solution {
public:
    int lengthOfLongestSubstring(const string& s) {
        std::array<int, 256> last;
        last.fill(-1);

        int best = 0, l = 0;
        const int n = static_cast<int>(s.size());

        for (int r = 0; r < n; ++r) {
            const auto c = static_cast<unsigned char>(s[r]);
            if (last[c] >= l) l = last[c] + 1;
            last[c] = r;
            best = std::max(best, r - l + 1);
        }
        return best;
    }
};