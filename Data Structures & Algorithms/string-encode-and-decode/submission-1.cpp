class Solution {
public:
    string encode(vector<string>& strs) {
        string res;
        for (const auto& s : strs)
            res += to_string(s.size()) + '#' + s;
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        size_t i = 0;
        while (i < s.size()) {
            size_t j = s.find('#', i);
            size_t len = stoi(s.substr(i, j - i));
            res.push_back(s.substr(j + 1, len));
            i = j + 1 + len;
        }
        return res;
    }
};