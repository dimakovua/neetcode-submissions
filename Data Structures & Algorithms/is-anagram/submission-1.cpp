class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        std::unordered_map<char, size_t> s_map;
        std::unordered_map<char, size_t> t_map;

        for(int i = 0; i < s.length(); i++)
        {
            s_map[s[i]]++;
            t_map[t[i]]++;
        }
        return s_map == t_map;
    }
};
