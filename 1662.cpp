#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void check(vector<string> word, string &s)
    {
        for (auto i:word)
        {
            for(auto j:i)
            {
                s.push_back(j);
            }
        }
        
    }
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string s1 = "";
        string s2 = "";
        check(word1, s1);
        check(word2, s2);
        if(s1 == s2)
        {
            cout<<"true";
            return true;
        }
        else{
            cout<<"false";
            return false;
        }
    }
};
int main()
{
    Solution sol;
    vector<string> word1 = {"abc", "d", "defg"};
    vector<string> word2 = {"abcddefg"};
    sol.arrayStringsAreEqual(word1, word2);
    return 0;
}