class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        int n = s.size();

        int i = 0;

        while(i < n)
        {
            // opening brackets
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }

            // closing brackets
            else
            {
                if(st.empty())
                {
                    return false;
                }

                if((st.top() == '(' && s[i] == ')') ||
                   (st.top() == '[' && s[i] == ']') ||
                   (st.top() == '{' && s[i] == '}'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }

            i++;
        }

        return st.empty();
    }
};