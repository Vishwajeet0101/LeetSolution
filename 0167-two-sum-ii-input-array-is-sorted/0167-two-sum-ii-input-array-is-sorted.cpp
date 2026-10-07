class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int Left = 0;
        int right = n - 1;
        int sum = 0;
        vector<int> result;
        while (right > Left) {
            sum = numbers[right] + numbers[Left];
            if (sum > target) {
                right--;
            } else if (sum < target) {
                Left++;
            } else {
                return {Left + 1, right + 1};
            }
        }
        return {};
    }
};
