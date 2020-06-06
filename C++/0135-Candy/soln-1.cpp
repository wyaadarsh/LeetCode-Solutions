class Solution {
public:
    int candy(vector<int>& ratings) {
        const int n = ratings.size();
        vector<int> candies(n, 1);
        for(int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1] && candies[i] <= candies[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }
        for(int i = n - 1; i > 0; --i) {
            if (ratings[i] < ratings[i - 1] && candies[i - 1] <= candies[i]) {
                candies[i - 1] = candies[i] + 1;
            }
        }
        return accumulate(candies.begin(), candies.end(), 0);
    }
};
