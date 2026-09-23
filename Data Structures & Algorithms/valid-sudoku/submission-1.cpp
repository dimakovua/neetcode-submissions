class Solution {
public:
    bool isValidSudoku(const vector<vector<char>>& board) {
        std::array<uint16_t, 9> rows{}, cols{}, boxes{};

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                const char ch = board[r][c];
                if (ch == '.') continue;

                const uint16_t bit = 1u << (ch - '1');
                const int b = (r / 3) * 3 + c / 3;

                if ((rows[r] | cols[c] | boxes[b]) & bit) return false;

                rows[r]  |= bit;
                cols[c]  |= bit;
                boxes[b] |= bit;
            }
        }
        return true;
    }
};