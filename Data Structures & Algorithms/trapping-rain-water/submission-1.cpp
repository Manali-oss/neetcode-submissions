class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;

        for(int i = 0; i < n; i++) {

            int leftMax = height[i];
            int rightMax = height[i];

            // Find maximum height on the left
            for(int j = 0; j <= i; j++) {
                leftMax = max(leftMax, height[j]);
            }

            // Find maximum height on the right
            for(int j = i; j < n; j++) {
                rightMax = max(rightMax, height[j]);
            }

            // Water trapped at index i
            water += min(leftMax, rightMax) - height[i];
        }

        return water;
    }
};