class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int number = 0;
       sort(nums.begin(),nums.end());
       for(int i =0; i<n; i++){
        if(nums[i]==number)
        number++;
        else
        return number;
       } 
       return number;
    }
};