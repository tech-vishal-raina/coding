class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int cnt = 0;
        int pointer = 0;
        if(nums.size()==1 && nums[0]==0) return 0;
        for(int i=0; i< nums.size(); i++){
            if(nums[i] ==1){
                cnt++;
                if(cnt>max) 
                max = cnt;
            pointer++;    
            }
            else{
                cnt = 0;
                pointer++;
            }
        }
        return max;
    }
};