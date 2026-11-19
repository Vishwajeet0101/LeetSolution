class Solution {
public:

int func(vector<int>nums, int mid){
    int split = 1; int splitArray =0;

    for(int i =0;i<nums.size();i++){
        if(splitArray + nums[i] <=mid ){
            splitArray += nums[i];
        }
        else{
            split++;
            splitArray = nums[i];
        }
    }
    return split;
}




    int splitArray(vector<int>& nums, int k) {

        int n = nums.size();
        int sum =0;
       int low = *max_element(nums.begin(),nums.end());
        n = nums.size();

       for(int i=0;i<n;i++){
        sum +=nums[i]; 
       }

       int high = sum;
       while(low <= high){
        int mid = (low+high)/2;
        int mincount = func(nums,mid);
        if(mincount <=k){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
       }    

        return low;
    }
};