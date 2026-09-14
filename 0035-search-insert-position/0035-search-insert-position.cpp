class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int i;
 
        
        for(int i =0;i<n;i++){
            while(target <=nums[i]){

            if(target == nums[i] ){
                return i;

            }
            else{
                return i;
            }

            }

        }

return i ;
        
    }
};