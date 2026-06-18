class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int maxindex;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(maxi<=height[i])
            {
                maxi=height[i];
                maxindex=i;
            }
        }
        int sum=0;
        // maxofleft dekhna h our current ko - karna h
        // agr - me aaya to 0 add karna h
        int left=0;
        for(int i=0;i<maxindex;i++)
        {
            left=max(left,height[i]);
            int leftsum=left-height[i];
            if(leftsum>=0)
            {
                sum+=leftsum;
            }
        }
        int right=0;
        for(int i=n-1;i>maxindex;i--)
        {
            right=max(right,height[i]);
            int rightsum=right-height[i];
            if(rightsum>=0)
            {
                sum+=rightsum;
            }
        }
        return sum;
    }
};