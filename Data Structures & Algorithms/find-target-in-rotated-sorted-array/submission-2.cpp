class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (target == nums[mid]) {
                return mid;
            }

            // Check if left half is sorted
            if (nums[start] <= nums[mid]) {

                // Check if target lies in left sorted half
                if (target >= nums[start] && target < nums[mid]) {
                    end = mid - 1;      // search left
                } else {
                    start = mid + 1;    // search right
                }
            }

            // Otherwise right half is sorted
            else {

                // Check if target lies in right sorted half
                if (target > nums[mid] && target <= nums[end]) {
                    start = mid + 1;    // search right
                } else {
                    end = mid - 1;      // search left
                }
            }
        }

        return -1;
    }
};