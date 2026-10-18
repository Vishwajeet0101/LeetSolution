class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<tuple<int,int,int>> temp;

        for(int i = 0; i < n; i++) {
            int x = nums[i], sum = 0;

            while(x > 0) {
                sum += x % 10;
                x /= 10;
            }

            temp.push_back({sum, nums[i], i});
        }

        sort(temp.begin(), temp.end());

        vector<bool> visited(n, false);
        int swaps = 0;

        for(int i = 0; i < n; i++) {
            if(visited[i] || get<2>(temp[i]) == i)
                continue;

            int j = i, size = 0;

            while(!visited[j]) {
                visited[j] = true;
                j = get<2>(temp[j]);
                size++;
            }

            swaps += size - 1;
        }

        return swaps;
    }
};