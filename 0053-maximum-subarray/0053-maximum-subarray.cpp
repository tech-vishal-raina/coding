class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>local_max;
for(int i = 0; i<nums.size(); i++){
    if(i == 0)
    local_max.push_back(nums[i]);

    else{
        int m = max(nums[i], nums[i] + local_max[i-1]);
        local_max.push_back(m);
    }
}   return *max_element(local_max.begin(), local_max.end());
}
};