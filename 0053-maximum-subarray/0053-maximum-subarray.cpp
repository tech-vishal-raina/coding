class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int local_max =0;
        int global_max =  INT_MIN;

for(int i = 0; i<nums.size(); i++){
    local_max = max(nums[i], nums[i]+ local_max);
    global_max = max(local_max, global_max);
}  
 return global_max;
}
};