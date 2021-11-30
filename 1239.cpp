#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxLength(vector<string>& arr) {
        int count = 0;
        unordered_map<char,int> m;
        for (int i = 0; i < arr.size(); i++)
        {
            for(auto i : arr[i])
            {
                if(m[i] == 1){
                    break;
                }
                if(m[i] == 0){
                    cout<<i<<" ";
                    m[i]++;
                    count++;
                }
            }
        }return count;
        
    }
};
int main()
{
    vector<string> arr = {"cha","r","act","ers"};
    Solution s;
    cout<<s.maxLength(arr);

    return 0;
}