#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size(),i =0;
        while (i < n)
        {
            if(arr[i] == 0)
            {
                arr.insert(arr.begin()+i+1,0);
                arr.pop_back();
                i++;
            }i++;
        }
        int j = 0;
        while (j != arr.size())
        {
            cout<<arr[j];
            j++;
        }
        
    }
};
int main()
{
    vector<int> a = {1,0,2,3,0,4,5,0};
    Solution sol;
    sol.duplicateZeros(a);
    return 0;
}
// class Solution
// {
// public:
//     void duplicateZeros(vector<int> &arr)
//     {
//         vector<int> ans = arr;
//         // cout<<"the ans is ";
//         // int k = 0;
//         // while (k != arr.size()-1)
//         // {
//         //     cout<<ans[k];
//         //     k++;
//         // }cout<<endl;
//         int i = 0;
//         int count = 0;
//         while (count != ans.size())
//         {
//             if (ans[i] != 0)
//             {
//                 arr[count] = ans[i];
//                 i++;count++;
//             }
//             else
//             {
//                 arr[count] = ans[i];
//                 count++;
//                 arr[count] = 0;
//                 i++;
//                 count++;
//             }
//         }
//         int j = 0;
//         while (j != arr.size())
//         {
//             cout<<arr[j];
//             j++;
//         }
//     }
// };