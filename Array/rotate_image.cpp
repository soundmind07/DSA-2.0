problem link:-
  https://leetcode.com/problems/rotate-image/description/
code:-
  class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();


        // doing transpose of the matrix.

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // interchanging the columns of the matrix.

        int left=0,right=m-1;
        while(left<right)
        {
            for(int i=0;i<n;i++)
            {
                swap(matrix[i][left],matrix[i][right]);
            }
            left++;
            right--;
        }
    }
};
