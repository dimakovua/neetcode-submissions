class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = static_cast<int>(numbers.size()) - 1;

        while(i < j)
        {
            const int sum = numbers[i] + numbers[j];
            if(sum < target) i++;
            else if(sum == target) return {i + 1, j + 1};
            else j--;
        }
        return {i, j};
    }
};
