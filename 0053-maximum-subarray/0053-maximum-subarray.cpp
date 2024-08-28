class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int local_max =0;
        int global_max =  INT_MIN;

for(int i = nums.size()-1; i>=0; i--){
    local_max = max(nums[i], nums[i]+ local_max);
    global_max = max(local_max, global_max);
}  
 return global_max;
}
};