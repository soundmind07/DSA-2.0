problem link:-
  https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
Code:-
  class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[index])
            {
                index++;
                nums[index]=nums[i];
                
            }
        }
        return index+1;
    }
};
