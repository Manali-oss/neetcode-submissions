class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>maxleft;
        maxleft.push_back(0);
        for(int i=1;i<n;i++)
        {
            maxleft.push_back(max(maxleft[i-1],height[i-1]));
        }

        vector<int>maxright(n);
        maxright[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            maxright[i]=max(maxright[i+1],height[i+1]);
        }

        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            int num=min(maxleft[i],maxright[i]);
            int value=num-height[i];
            if(value>=0)
            {
                ans[i]=value;
            }
            else{
                ans[i]=0;
            }
        }

        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=ans[i];
        }
        return sum;
    }
};
