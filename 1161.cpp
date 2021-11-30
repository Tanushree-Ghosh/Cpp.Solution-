#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int ans = 0;
        int level = 1;
        int maxi = INT_MIN; 
        if(!root)return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                TreeNode * temp = q.front();
                q.pop();
                count += temp->val;
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            if(maxi < count){
                maxi = count;
                ans = level;
                level++;
            }else{
                level++;
            }
            
        }
        
    }
};
int main()
{
    
    return 0;
}