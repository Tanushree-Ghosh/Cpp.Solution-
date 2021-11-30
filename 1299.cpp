#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans = arr;
        for (int i = 0; i < arr.size()-1; i++)
        {
            for (int j = i+1; j < arr.size(); j++)
            {
                if(ans[i] < arr[j])
                {
                    ans[i] = arr[j];
                }
            }
            
        }
        ans[ans.size()] = -1;
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i];
        }
        
        return ans;
    }
};
int main()
{
    vector<int> arr;
    Solution s;
    s.replaceElements(arr);

    return 0;
}