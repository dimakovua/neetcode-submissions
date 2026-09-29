class Solution {
public:
    int characterReplacement(string s, int k) {
        std::array<int, 26> count {};

        int best = 0, l = 0, max_freq = 0;

        for(int r = 0; r < static_cast<int>(s.size()); ++r)
        {
            max_freq = std::max(max_freq, ++count[s[r] - 'A']);

            while((r - l + 1) - max_freq > k)
            {
                --count[s[l] - 'A'];
                l++;
            }

            best = std::max(best, r - l + 1);
        }

        return best;
    }
};
