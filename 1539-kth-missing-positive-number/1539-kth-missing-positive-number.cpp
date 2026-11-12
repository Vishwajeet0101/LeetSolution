class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int high = arr.back();
        vector<int> temp;

        int j = 0;

        for(int i = 1; i <= high; i++) {
            if(j < arr.size() && arr[j] == i) {
                j++;
            }
            else {
                temp.push_back(i);
            }
        }

        if(temp.size() >= k) {
            return temp[k-1];
        }

        return high + (k - temp.size());
    }
};