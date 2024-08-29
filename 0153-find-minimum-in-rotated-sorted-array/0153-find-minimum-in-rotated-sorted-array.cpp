class Solution {
public:
    int findMin(vector<int>& nums) {
        int min_element = INT_MAX;
        for(int i =0; i<nums.size(); i++){
            min_element = min(min_element,nums[i]);
        }
        return min_element;
    }
};