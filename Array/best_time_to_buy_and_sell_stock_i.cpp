problem link:-
  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
code:-
  class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int curr_min=prices[0];
        int ans=INT_MIN;
        for(int i=1;i<n;i++)
        {
            int profit=prices[i]-curr_min;
            ans=max(ans,profit);
            curr_min=min(curr_min,prices[i]);
        }
        if(ans<=0)
        return 0;
        else
        return ans;
    }
};
