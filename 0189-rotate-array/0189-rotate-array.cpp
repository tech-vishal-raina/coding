class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k = k%n;
        vector<int> rotate;
        if(k==0 || n ==1 || k==n) return;
        for(int i =n-1; i>=n-k;  i--){
            rotate.push_back(nums[i]);
        }
        reverse(rotate.begin(),rotate.end());

        for(int i = 0; i< n-k ; i++){
            rotate.push_back(nums[i]);
        }
        nums = rotate;

   }
};