problem link:-
  https://leetcode.com/problems/merge-intervals/description/
code:-
  class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int row=intervals.size();
        int column=intervals[0].size();
        int start=intervals[0][0];
        int end=intervals[0][1];
        vector<vector<int>>ans;
        for(int i=1;i<row;i++)
        {
            int curr_start=intervals[i][0];
            int curr_end=intervals[i][1];
            if(curr_start<=end)
            {
                start=min(start,curr_start);
                end=max(end,curr_end);
            }
            else
            {
                ans.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
            
        }
        ans.push_back({start,end});
        return ans;
    }
};
