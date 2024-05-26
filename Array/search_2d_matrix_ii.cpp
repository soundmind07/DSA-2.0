problem link:-
  https://leetcode.com/problems/search-a-2d-matrix-ii/
Code:-
  class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        int i=0,j=columns-1;
        while(i<rows and j>=0)
        {
            if(matrix[i][j]==target)
            return true;
            else if(matrix[i][j]>target)
            j--;
            else
            i++;
        }
        return false;
    }
};
