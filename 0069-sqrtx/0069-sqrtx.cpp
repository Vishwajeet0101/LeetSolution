class Solution {
public:
    int mySqrt(int x) {
        int ans = x;
        long long low = 0;
        long long high = x;
         while(low<=high){
            long long mid = (low+high)/2;
            long long val = (mid*mid );
            if(val<=x) {
             ans = mid;
             low = mid+1;
            }

            else{
                high = mid-1;
            }
         }
        return ans;
    }
};