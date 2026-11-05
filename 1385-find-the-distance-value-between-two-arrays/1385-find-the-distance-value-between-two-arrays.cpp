class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();

        sort(arr2.begin(), arr2.end());

        int count = 0;

        for (int i = 0; i < n; i++) {
            int low = 0;
            int high = arr2.size() - 1;
            bool valid = true;

            while (low <= high) {
                int mid = (high +low) / 2;

                if (arr2[mid] < arr1[i] - d) {
                    low = mid + 1;
                }
                else if (arr2[mid] > arr1[i] + d) {
                    high = mid - 1;
                }
                else {
                    valid = false;
                    break;
                }
            }

            if (valid == true) {
                count++;
            }
        }

        return count;
    }
};