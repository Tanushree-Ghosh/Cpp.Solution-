#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        stack<char> a;
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                a.push(s[i]);
                if (a.size() > 1)
                {
                    ans += s[i];
                }
            }
            if (s[i] == ')')
            {
                a.pop();
                if (a.size() != 0)
                {
                    ans += s[i];
                }
                
            }
        }
        cout<<ans;
        return ans;
    }
};
int main()
{
    string s = "(()())(())";
    Solution sol;
    sol.removeOuterParentheses(s);
    return 0;
}


/*
string removeOuterParentheses(string s)
{
    stack<char> store;
    int n = s.size();
    string ans = "";
    int i = 0;
    while (i < n)
    {
        if (s[i] == '(')
        {
            store.push(s[i]);
            if (store.size() > 1)
            {
                ans += s[i];
            }
        }
        if (s[i] == ')')
        {
            store.pop();
            if (store.size() != 0)
            {
                ans += s[i];
            }
        }

        i++;
    }
    return ans;
}
*/