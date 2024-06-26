problem link:-
  https://leetcode.com/problems/merge-sorted-array/description/
code:-
  class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=n+m-1;
        int i=m-1;
        int j=n-1;
        while(i>=0 and j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else if(nums2[j]>nums1[i])
            {
                nums1[k]=nums2[j];
                k--;
                j--;
            }
            else
            {
                nums1[k]=nums1[i];
                i--;
                k--;
            }
        }
        while(i>=0)
        {
            nums1[k]=nums1[i];
            i--;
            k--;
        }
        while(j>=0)
        {
            nums1[k]=nums2[j];
            k--;
            j--;
        }
    }
};
