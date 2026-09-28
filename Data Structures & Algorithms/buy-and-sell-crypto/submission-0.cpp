class Solution {
public:
    int maxProfit(const vector<int>& prices) {
        int min_price = prices[0];
        int best = 0;

        for (const int p : prices) {
            min_price = std::min(min_price, p);
            best = std::max(best, p - min_price);
        }
        return best;
    }
};