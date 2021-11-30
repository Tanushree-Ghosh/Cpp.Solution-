#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i = 0,j=0;
        int sum = 0;
        int count = 0;
        while (j < arr.size())
        {
            sum += arr[j];
            if(j-i+1<k){
                j++;
            }else{
                if(sum/k >= threshold){
                    count++;
                }
                sum-=arr[i];
                i++,j++;
            }
        }
        return count ;
    }
};
int main()
{
    vector<int> arr = {2,2,2,2,5,5,5,8};
    int k = 3;
    int threshold = 4;
    Solution sol;
    cout<<sol.numOfSubarrays(arr,k,threshold);
    return 0;
}