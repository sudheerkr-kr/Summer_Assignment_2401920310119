class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 0;  // yeh batata hai last unique element kaha hai
        
        for(int j = 1; j < nums.size(); j++){
            
            if(nums[j] != nums[i]){  // new element mila
                i++;                // aage badho
                nums[i] = nums[j];  // overwrite karo
            }
        }
        
        return i + 1;  // total unique elements
    }
};
