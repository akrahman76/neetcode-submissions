class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int left = 0;
        int right = left+1;

        while(right<prices.size()){
            if(prices[right]<prices[left]){
                left = right;
                right++;
            }
            else{
                profit = max(profit,(prices[right]-prices[left]));
                right++;
            }
        }

        return profit;
    }
};
