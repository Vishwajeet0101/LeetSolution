class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();

        int sum =0;
        int maxx = *max_element(nums.begin(), nums.end());

        for(int i=0;i<n;i++){
         sum += maxx-nums[i];
        }

    
        return sum;
    }
};