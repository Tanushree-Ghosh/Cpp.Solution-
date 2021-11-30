#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i = nums.size()-1;
        int j = nums.size()-2;
        sort(nums.begin(), nums.end());
        return (nums[i]-1)*(nums[j]-1);
    }
};
int main()
{
    vector<int> nums = {3,4,5,2};
    Solution sol;
    cout<<sol.maxProduct(nums);
    return 0;
}