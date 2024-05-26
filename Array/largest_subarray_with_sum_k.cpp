problem link:-
https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
Code:-
  /*You are required to complete this function*/

class Solution{
    public:
    int largestsub(vector<int>&A,int n, unordered_map<int,int>mp, int k)
    {
        int prefix=0;
        int res=0;
        for(int i=0;i<n;i++)
        {
            prefix+=A[i];
            if(prefix==k)
            res=max(res,i+1);
            else if(mp.find(prefix-k)!=mp.end())
            res=max(res,i-mp[prefix]);
            else
            mp[prefix]=i;
        }
        return res;
    }
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>mp;
        int ans=largestsub(A,n,mp,0);
        return ans;
    }
};
