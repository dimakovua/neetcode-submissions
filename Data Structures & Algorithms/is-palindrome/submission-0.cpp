class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = static_cast<int>(s.size()) - 1;

        while(i < j)
        {
            if(!std::isalnum(static_cast<unsigned char>(s[i]))) {++i; continue; }
            if(!std::isalnum(static_cast<unsigned char>(s[j]))) {--j; continue; }
            if(std::tolower(static_cast<unsigned char>(s[i])) != std::tolower(static_cast<unsigned char>(s[j]))) { return false; }
            i++;
            j--;
        }

        return true;
    }
};
