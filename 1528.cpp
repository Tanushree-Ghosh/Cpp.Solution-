#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            ans[indices[i]] = s[i];
        }
        cout<<ans;
        return ans;
    }
};
int main()
{
    string s = "codeleet";
    vector<int> arr = {4,5,6,7,0,2,1,3};
    Solution sol;
    sol.restoreString(s,arr);
    return 0;
}