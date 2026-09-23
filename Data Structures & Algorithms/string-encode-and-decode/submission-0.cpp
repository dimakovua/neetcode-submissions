class Solution {
public:
    int get_num(std::string& input)
    {
        int res ;
        std::string res_str = "";

        int helper = 0;
        for(auto c : input)
        {
            helper++;
            if (c != '!')
                res_str += c;
            else
            {
                input.erase(input.begin(), input.begin()+ helper);
                break;
            }
        }
        return std::stoi(res_str);
    }

    string encode(vector<string>& strs) {
        std::string res = "";
        std::string strings = "";

        res += std::to_string(strs.size());
        res+= '!';

        for(const auto& str : strs)
        {
            strings += str;
            res += std::to_string(str.length());
            res += '!';  
        }
        return res + strings;
    }

    vector<string> decode(string s) {
        int vec_size = get_num(s);
        std::vector<int> words_size(vec_size);
        std::vector<string> res(vec_size);

        int i = 0;
        while(i < vec_size)
        {
            words_size[i] = get_num(s);
            i++;
        }
        i = 0;

        while(i < vec_size)
        {
            res[i] = s.substr(0, words_size[i]);
            s.erase(s.begin(), s.begin()+ words_size[i]);
            i++;
        }

        return res;

    }
};