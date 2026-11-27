
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        int low = 0;
        int high = m - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int row = 0;

            // Find maximum element in middle column
            for (int i = 0; i < n; i++) {
                if (mat[i][mid] > mat[row][mid]) {
                    row = i;
                }
            }

            int left = (mid > 0) ? mat[row][mid - 1] : -1;
            int right = (mid < m - 1) ? mat[row][mid + 1] : -1;

            // Peak found
            if (mat[row][mid] > left &&
                mat[row][mid] > right) {

                return {row, mid};
            }

            // Search left
            else if (left > mat[row][mid]) {
                high = mid - 1;
            }

            // Search right
            else {
                low = mid + 1;
            }
        }

        return {-1, -1};
    }
};
