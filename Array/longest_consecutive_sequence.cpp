problem link:-
  https://leetcode.com/problems/longest-consecutive-sequence/description/
Code:-
  class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int curr=nums[i];
            if(s.find(curr-1)==s.end())
            {
                int length=0;
                while(s.find(curr)!=s.end())
                {
                    length++;
                    curr++;
                }
                ans=max(ans,length);
            }
        }
        return ans;
    }
};
