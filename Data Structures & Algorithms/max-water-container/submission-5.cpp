class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        for(int left=0;left<n;left++)
        {
            for(int right=n-1;right>0;right--)
            {
                int width=(right-left);
                int height=min(heights[right],heights[left]);
                ans=max(width*height,ans);
            }
        }
        return ans;
    }
};
