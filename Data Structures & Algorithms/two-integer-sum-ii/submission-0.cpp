class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = static_cast<int>(numbers.size()) - 1;

        while(i < j)
        {
            if(numbers[i] + numbers[j] < target) i++;
            else if(numbers[i] + numbers[j] == target) return {++i, ++j};
            else j--;
        }
        return {i, j};
    }
};
