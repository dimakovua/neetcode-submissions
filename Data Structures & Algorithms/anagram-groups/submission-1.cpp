class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, std::vector<string>> sort_to_words;

        for(const auto& str : strs)
        {
            auto copy = str;
            std::sort(copy.begin(), copy.end());
            sort_to_words[copy].push_back(str);
        }
        std::vector<std::vector<string>> res;
        for(const auto & [ key, value ] : sort_to_words)
        {
            res.push_back(value);
        }
        return res;
    }
};
