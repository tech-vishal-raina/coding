class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        if(n==1) return;
        for(int i=0; i<n;){
            if(nums[i]==0){
               cnt = cnt+1;
               nums.erase(nums.begin() + i);
               n--;
            }
            else{
                i++;
            }
        }
        if(cnt==0) return;
        else{
            while(cnt!=0){
                nums.push_back(0);
                cnt--;
            }
        }
    }
};