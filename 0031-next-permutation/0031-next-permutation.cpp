class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //store the index
        int index= -1;
        for(int i = nums.size()-1; i>0; i--){
            if(nums[i]>nums[i-1]){
                 index = i-1;
                 break;
            }
        }
        //find the smallest number in this subarray and swap
        if(index!=-1){ 
        for(int j= nums.size()-1;j>=index+1;j--){
                 if(nums[j]>nums[index]) {
                 swap(nums[index],nums[j]);
                 break;
                 }  
        }
        }
        //reverse right elements after i-1
        
            reverse(nums.begin()+index+1,nums.end());
    }
};