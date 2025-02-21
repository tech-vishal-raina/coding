class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // TWO POINTER APPROACH
        int nonzerotracker =0;
        for(int i= 0; i< nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[nonzerotracker],nums[i]);
                nonzerotracker++;
            }
        }
    }
};