class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j= 0;
        // phle hum naya array bnake usme non zero elemnt daal denge bina order chnge kiye 
        for(int i=0; i<nums.size() ; i++){
            if(nums[i]!=0){
               nums[j]=nums[i];
               j++;
            }   
        }
        // fir jo jgh bachegi usme zeroes daal denge 
        while(j<nums.size()){
            nums[j]=0;
            j++;
        }

    }
};
