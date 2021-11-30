#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
        int i = 0,j=0;
        int ans = 0;
        unordered_map<char,int> mp;
        while (j<s.size())
        {
            mp[s[j]]++;
            if(mp.size()<3){
                j++;
            }
            else if(mp.size()==3){
                ans++;j++;
            }
        }
        return ans;
    }
};
int main()
{
    string s = "abcabc";
    Solution sol;
    cout<<sol.numberOfSubstrings(s);
    return 0;
}