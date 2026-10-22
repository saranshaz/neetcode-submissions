class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int mini = prices[0];
        for(int price : prices){
            mini = min(mini,price);
            profit =max(profit,price-mini);
        }
        return profit;
        
    }
};
