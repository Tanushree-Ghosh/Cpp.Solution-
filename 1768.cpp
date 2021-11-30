#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int a = 0;
        int b = 0;
        while (a != word1.size() && b != word2.size())
        {
            ans.push_back(word1[a]);
            ans.push_back(word2[b]);
            a++;b++;
        }
        while (a != word1.size())
        {
            ans.push_back(word1[a]);
            a++;
        }
        while (b != word2.size())
        {
            ans.push_back(word2[b]);
            b++;
        }
        int i =0;
        while(i != ans.size())
        {
            cout<<ans[i];
            i++;
        }
        return ans;
    }
};
int main()
{
    string s1 = "abc";
    string s2 = "pqrst";
    Solution s;
    s.mergeAlternately(s1,s2);
    return 0;
}