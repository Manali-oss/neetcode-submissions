class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>temp(n+1);
       for(int i=0;i<=n;i++)
       {
        int m=i;
        int count=0;
        while(m)
        {
            int rem=m%2;
            if(rem==1)
            {
                count++;
            }
            m=m/2;
        }
        temp[i]=count;
       } 
       return temp;
    }
};
