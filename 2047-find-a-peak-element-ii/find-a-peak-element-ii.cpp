class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = (int)mat.size();
        int cols = (int)mat[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int up = -1;
                if (i > 0) {
                    up = mat[i - 1][j];
                }

                int down = -1;
                if (i + 1 < rows) {
                    down = mat[i + 1][j];
                }

                int left = -1;
                if (j > 0) {
                    left = mat[i][j - 1];
                }

                int right = -1;
                if (j + 1 < cols) {
                    right = mat[i][j + 1];
                }

                if (mat[i][j] > up && mat[i][j] > down && mat[i][j] > left && mat[i][j] > right) {
                    return {i, j};
                }
            }
        }

        // Return {-1, -1} if no peak element is found
        return {-1, -1};
    }
};