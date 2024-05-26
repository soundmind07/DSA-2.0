problem link:-https://leetcode.com/problems/majority-element/description/
code:-
  class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=INT_MIN;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==candidate)
            count++;
            else if(nums[i]!=candidate and count==0)
            {
                candidate=nums[i];
                count=1;
            }
            else
            count--;
        }
        return candidate;
    }
};
