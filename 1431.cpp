#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = INT_MIN;
        vector<bool> ans;
        for(auto i : candies)
        {
            maxi = max(maxi,i);
        }
        for(auto i : candies)
        {
            if (i+extraCandies >= maxi)
            {
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
            
        }
        return ans;
    }
};
int main()
{
    
    return 0;
}