class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        for(int i=0;i<=n;i++)
        {
            index+=i;
        }
        int digit=0;
        for(int i=0;i<n;i++)
        {
            digit+=nums[i];
        }
        int ans=index-digit;
        return ans;
    }
};
