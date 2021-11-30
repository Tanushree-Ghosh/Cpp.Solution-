#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int count = 0;
    bool isThree(int n)
    {
        if (n < 2)
        {
            return false;
        }
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count == 3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int n = 13;
    Solution s;
    cout<< s.isThree(n);
    return 0;
}