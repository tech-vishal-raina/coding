class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number;
            unordered_map<int,int>mpp;
            for(int i=0; i<nums.size();i++){
                mpp[nums[i]]++;
            }
            for(auto it : mpp){
                if(it.second ==1) 
                number = it.first;
            }
         return number;
    }
};