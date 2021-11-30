#include <bits/stdc++.h>
using namespace std;

vector<int> arrayRankTransform(vector<int> &arr)
{
    vector<int> p = arr;
    sort(p.begin(), p.end());
    set<pair<int, int>> s;
    int h = 1;
    for (int i = 0; i < p.size(); i++)
    {
        s.insert(make_pair(p[i], h));
        h++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if ()
        {

        }
    }
}

int main()
{
    vector<int> arr = {37, 12, 28, 9, 100, 56, 80, 5, 12};
    Solution sol;
    sol.arrayRankTransform(arr);
    return 0;
}
// class Solution
// {
// public:
//     vector<int> arrayRankTransform(vector<int> &arr)
//     {
//         vector<int> ans;
//         vector<int> ref;
//         set<int> s;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             if (s.find(arr[i]) == s.end())
//             {
//                 ref.push_back(arr[i]);
//                 s.insert(arr[i]);
//             }
//         }
//         sort(ref.begin(), ref.end());
//         for (int i = 0; i < ref.size(); i++)
//         {
//             cout << ref[i] << " ";
//         }
//         cout<<endl;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             for (int j = 0; j < ref.size(); j++)
//             {
//                 if (arr[i] == ref[j])
//                 {
//                     ans.push_back(j + 1);
//                     break;
//                 }
//             }
//         }
//         for (int i = 0; i < ans.size(); i++)
//         {
//             cout << ans[i] << " ";
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     vector<int> arrayRankTransform(vector<int>& arr) {
//         int n = arr.size();
//         if (n == 0) return {};
//         if (n == 1) return {1};
        
        
//         vector<pair<int,int>> v;
//         for (int i = 0; i < n; i++) {
//             v.push_back({arr[i], i});
//         }
        
//         sort(v.begin(), v.end());
//         int rank = 1, prev = v[0].first;
//         v[0].first = rank;
        
//         for (int i = 1; i < v.size(); i++) {
//             if (v[i].first == prev) {
//                 prev = v[i].first;
//                 v[i].first = rank;
//             }
//             else {
//                 prev = v[i].first;
//                 v[i].first = ++rank;
//             }
//         }
        
//         vector<int> ans(n, 0);
//         for (int i = 0; i < v.size(); i++) {
//             ans[v[i].second] = v[i].first;
//         }
//         return ans;
//     }
// };