class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int maxi = 0;

        while (left < right) {
            int width = right - left;
            int height = min(heights[left], heights[right]);
            int area = width * height;

            maxi = max(maxi, area);

            // Move the pointer with the smaller height
            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxi;
    }
};