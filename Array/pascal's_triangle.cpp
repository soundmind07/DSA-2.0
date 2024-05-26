problem link:-
  https://leetcode.com/problems/pascals-triangle/description/
Code:-
  class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        if (numRows == 1)
            return ans;

        vector<int> prev = {1};
        for (int i = 1; i < numRows; i++) {
            vector<int> temp;

            temp.push_back(1);
            for (int j = 1; j < i; j++) {
                temp.push_back(prev[j] + prev[j - 1]);
            }
            temp.push_back(1);
            prev = temp;
            ans.push_back(prev);
        }
        return ans;
    }
};
