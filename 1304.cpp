#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int a = n/2;
        while (a)
        {
            ans.push_back(a);
            ans.push_back(-a);
            a--;
        }
        
        if(n %2 == 1){
            ans.push_back(0);
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i];
        }
        
        return ans;
    }
};
int main()
{
    Solution sol;
    sol.sumZero(5);
    return 0;
}