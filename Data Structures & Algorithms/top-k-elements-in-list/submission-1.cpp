class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();

        unordered_map<int,int> m;

        // Frequency map
        for(int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }

        // vector<pair<frequency, element>>
        vector<pair<int,int>> temp;

        for(auto it : m)
        {
            temp.push_back({it.second, it.first});
        }

        // Sort in descending order
        sort(temp.rbegin(), temp.rend());

        vector<int> ans;

        // Take first k elements
        for(int i = 0; i < k; i++)
        {
            ans.push_back(temp[i].second);
        }

        return ans;
    }
};