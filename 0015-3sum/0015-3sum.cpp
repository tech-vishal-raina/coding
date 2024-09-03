class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size()-2; i++){
            // Skip duplicates for the first element of the triplet
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int left_pointer = i + 1;
            int right_pointer = nums.size() - 1;

            while(left_pointer < right_pointer){
                int sum = nums[i] + nums[left_pointer] + nums[right_pointer];
                if(sum == 0) {
                    v.push_back({ nums[i] , nums[left_pointer] , nums[right_pointer] });

                    // Skip duplicates for the second element of the triplet
                    while(left_pointer < right_pointer && nums[left_pointer] == nums[left_pointer + 1]) 
                        left_pointer++;

                    // Skip duplicates for the third element of the triplet
                    while(left_pointer < right_pointer && nums[right_pointer] == nums[right_pointer - 1]) 
                        right_pointer--;

                    left_pointer++;
                    right_pointer--;
                }
                else if(sum > 0) {
                    right_pointer--;
                } else {
                    left_pointer++;
                }
            }
        }
        return v;
    }      
};
