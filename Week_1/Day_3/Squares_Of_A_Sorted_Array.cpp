class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
   
        vector<int> finalans(nums.size()); 

    
        for(int i=0 ; i<nums.size(); i++){
            finalans[i]= nums[i]*nums[i];
        }
        sort(finalans.begin(), finalans.end());

        return finalans;
        

    }
};
