#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 0 || n == 1) return;

        // Normalize k to handle cases where k >= n
        k = k % n;

        // Create a vector of size n
        vector<int> rotate(n);

        // Copy last k elements
        for (int i = 0; i < k; i++) {
            rotate[i] = nums[n - k + i];
        }

        // Copy first n-k elements
        for (int i = 0; i < n - k; i++) {
            rotate[i + k] = nums[i];
        }

        // Copy back to original array
        for (int i = 0; i < n; i++) {
            nums[i] = rotate[i];
        }
    }
};
