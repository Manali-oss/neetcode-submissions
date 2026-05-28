class Solution {
public:
    int getSum(int a, int b) {
        uint32_t carry=a&b;
        int sumwithoutcarry=a^b;
        int actualcarray=carry<<1;
        while(carry != 0)
        {
            carry=sumwithoutcarry & actualcarray;
            sumwithoutcarry=sumwithoutcarry ^ actualcarray;
            actualcarray=carry << 1;
        }
        return sumwithoutcarry;
    }
};
