class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int low = 0, high = n - 1;
        int first = n;

        // Lower Bound
        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] >= target) {
                first = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        if(first == n || nums[first] != target) {
            return {-1, -1};
        }

        low = 0;
        high = n - 1;
        int upper = n;

        // Upper Bound
        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] > target) {
                upper = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return {first, upper - 1};
    }
};