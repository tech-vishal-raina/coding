class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expn = nums.size();
        int expsum = (expn*(expn+1))/2;
        int actsum =0;
        for(int i=0; i<nums.size();i++){
             actsum =  actsum + nums[i];
        }
        int missingnumber = expsum - actsum;
        return missingnumber;
    }
};