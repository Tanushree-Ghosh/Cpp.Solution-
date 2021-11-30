#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int key = 0;
        for(auto ans : arr)
        {
            if(ans %2 != 0)
            {
                key++;
            }else{
                key = 0;
            }
            if(key == 3)return true;
        }
        return false;
    }
};
int main()
{
    vector<int> arr = {1,2,34,3,4,5,7,22,12};
    Solution sol;
    cout<<sol.threeConsecutiveOdds(arr);
    return 0;
}