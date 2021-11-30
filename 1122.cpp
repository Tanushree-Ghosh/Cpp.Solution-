#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1,
     vector<int>& arr2)
    {
        vector<int> ans;
        map<int,int> m;
        for (auto i : ans)
        {
            m[arr1[i]]++;
        }
            
        // for (int i = 0; i < arr2.size(); i++)
        // {
        //     while (m[arr1[i]] == a)
        //     {
        //         ans.push_back(arr2[i]);
        //         m[arr1[i]]--;
        //     } 
        // }
        // for (int i = 0; i < ans.size(); i++)
        // {
        //     cout<<ans[i]<<" ";
        // }
        return ans;
        
    }
};
int main()
{
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};
    Solution sol;
    sol.relativeSortArray(arr1,arr2);

    return 0;
}