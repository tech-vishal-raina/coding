class Solution {
public:
    void sortColors(vector<int>& nums) {
        // since there are only 0s, 1s and 2s, we can use two pointer appraoch and use 2 for loops
        int pointer = 0;
        int cnt = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]==0){
                swap(nums[pointer],nums[i]);
                cnt++;
                pointer++;
            }
        }
        pointer = cnt;
        for(int i=cnt; i<nums.size();i++){
            if(nums[i]==1){
                swap(nums[pointer],nums[i]);
                pointer++;
            }
        }

    }
};