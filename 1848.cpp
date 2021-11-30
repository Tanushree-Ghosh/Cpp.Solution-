#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start)
    {
        int a = 0;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                a = abs(i-start);
                v.push_back(a);
            }
        }
        sort(v.begin(),v.end());
        return v[0];
    }
};
int main()
{
    vector<int> nums = {1,1,1,1,1,1,1,1,1,1};
    int target = 1;
    int start = 0;
    Solution sol;
    cout<<sol.getMinDistance(nums,target,start);
    return 0;
}