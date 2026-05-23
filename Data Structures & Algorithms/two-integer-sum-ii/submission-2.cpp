class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int first=nums[i];
            int second=target-first;
            if(m.find(second)!=m.end())
            {
                return {m[second]+1,i+1};
            }
            m[first]=i;
        }
        return {};
    }
};
