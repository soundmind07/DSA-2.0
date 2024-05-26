problem link:- https://leetcode.com/problems/maximum-subarray/description/
Code:-
  class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi_found_so_far = INT_MIN;
        int maxi_ending = 0;
        for (int i = 0; i < n; i++) {
            maxi_ending += nums[i];

            if (maxi_ending > maxi_found_so_far) {
                maxi_found_so_far = maxi_ending;
            }
            if (maxi_ending < 0)
                maxi_ending = 0;
        }
        return maxi_found_so_far;
    }
};
