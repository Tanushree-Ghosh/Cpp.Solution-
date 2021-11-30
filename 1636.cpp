#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> v;
        map<int,int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        
        

        
    }
};
int main()
{
    vector<int> nums = {1,1,2,2,2,3};
    Solution sol;
    sol.frequencySort(nums);
    return 0;
}