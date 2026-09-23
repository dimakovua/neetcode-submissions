#include <unordered_set> 

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       std::unordered_set<int> aboba;
       for(auto i : nums)
       {
        if (aboba.count(i))
            return true;
        aboba.insert(i);
       }
       return false;
    }
};