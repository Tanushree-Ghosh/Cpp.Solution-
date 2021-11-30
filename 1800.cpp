#include <bits/stdc++.h>
using namespace std;
// class Solution
// {
// public:
//     int maxAscendingSum(vector<int> &nums)
//     {

//         vector<int> ans;
//         ans= nums;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (nums[i] < nums[i + 1])
//             {
//                 ans[i+1] += ans[i];
//             }
//         }
//         sort(ans.begin(),ans.end());
//         return ans[ans.size() -1];
//         // return max(a.begin(),a.end());
//     }
// };
class Solution
{
public:
    int maxAscendingSum(vector<int> &nums)
    {
        vector<int> ans;
        ans = nums;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i + 1])
                ans[i + 1] += ans[i];
        }
        sort(ans.begin(), ans.end());
        cout << ans[ans.size() - 1];
        return ans[ans.size() - 1];
    }
};
int main()
{
    vector<int> ans = {10, 20, 30, 5, 10, 50};
    Solution s;
    s.maxAscendingSum(ans);
    return 0;
}