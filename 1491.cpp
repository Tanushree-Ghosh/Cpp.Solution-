#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        double ans = 0;
        int count = 0;
        sort(salary.begin(),salary.end());
        for (int i = 1; i < salary.size() - 1; i++)
        {
            ans = ans + salary[i];
            count++;
        }
        cout<<ans/count;
        return ans/count;
    }
};
int main()
{
    vector<int> salary = {4000,3000,1000,2000};
    Solution s;
    s.average(salary);
    return 0;
}