class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {};
        bool columns[9][9] = {};
        bool boxes[9][9] = {};

        int c = 0;
        int r = 0;
        char cur_char;
        for(; c < 9; c++)
        {
            for(; r < 9; r++)
            {
                cur_char = board[c][r]-'1';
                if(board[c][r] != '.')
                {
                    if(rows[r][cur_char] || columns[c][cur_char] || boxes[(r/3) * 3 + c/3][cur_char])
                    {
                        return false;
                    }
                    rows[r][cur_char] = true;
                    columns[c][cur_char] = true;
                    boxes[(r/3) * 3 + c/3][cur_char] = true;
                }
            }
            r = 0;
        }
        return true;
    }
};
