problem link:-
  https://leetcode.com/problems/set-matrix-zeroes/description/
Code:-
  class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row_check = 0, col_check = 0;

        for (int i = 0; i < m; i++) {
            if (matrix[0][i] == 0) {
                row_check = 1;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] == 0) {
                col_check = 1;
                break;
            }
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 or matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        if (row_check) {
            for (int i = 0; i < m; i++) {
                matrix[0][i] = 0;
            }
        }

        if (col_check) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
