class Solution {
public:

    int func(vector<int>& weights, int cap) {
        int day = 1;
        int load = 0;

        for (int i = 0; i < weights.size(); i++) {
            if (load + weights[i] > cap) {
                day++;
                load = weights[i];
            }
            else {
                load += weights[i];
            }
        }

        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int maxi = 0;

        for (int i = 0; i < weights.size(); i++) {
            sum += weights[i];
            maxi = max(maxi, weights[i]);
        }


        int low = maxi;
        int high = sum;

        while(low<high){
            int mid = (low+high)/2;

            int daysReq = func(weights, mid);
        
        if(daysReq <= days){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }

        return low;
    }
};