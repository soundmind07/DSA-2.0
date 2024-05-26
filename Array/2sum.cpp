problem link:-
  https://leetcode.com/problems/two-sum/description/
code:-
  class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mp;  // stores value,index pair
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                return {i,mp[target-nums[i]]};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};
