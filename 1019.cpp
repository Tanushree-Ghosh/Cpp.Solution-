#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
};
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        while(head != NULL)
        {
            v.push_back(head->val);
            head = head->next; 
        }
        for (int i = 0; i < v.size(); i++)
        {
            int temp = v[i];
            for (int j = i+1; j < v.size(); j++)
            {
                if(v[i] < v[j])
                {
                    v[i] = v[j];
                    break;
                }
            }
            if(v[i] == temp)
            {
                v[i] = 0;
            }
            
        }
        
    }
};
int main()
{
    
    return 0;
}