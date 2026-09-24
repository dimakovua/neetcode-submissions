class Solution {
public:
    static constexpr bool alnum(char c) noexcept {
        return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    }

    static constexpr char fold(char c) noexcept { return c | 0x20; }

    bool isPalindrome(const string& s) {
        const char* l = s.data();
        const char* r = l + s.size();

        while (l < r) {
            if (!alnum(*l))       { ++l; continue; }
            if (!alnum(*(r - 1))) { --r; continue; }
            if (fold(*l) != fold(*(r - 1))) return false;
            ++l; --r;
        }
        return true;
    }
};
