#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (!st.empty() && s[i] == 'c')
            {
                if (!st.empty() && st.top() == 'b')
                {
                    st.pop();
                }
                else
                {
                    cout<<"false";
                    return false;
                }
                if (!st.empty() && st.top() == 'a')
                {
                    st.pop();
                }
                else
                {
                    cout<<"false";
                    return false;
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        if (st.empty())
        {
            cout<<"true";
        }else{
            cout<<"false";
        }
        
        return st.empty();
    }
};
int main()
{
    string s = "cababc";
    Solution sol;
    sol.isValid(s);
    return 0;
}