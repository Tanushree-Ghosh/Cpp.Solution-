#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution
{
public:
    int deepestLeavesSum(TreeNode *root)
    {
        int sum = 0;
        if (!root)
        {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                TreeNode * temp = q.front();
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                sum += temp->val;
            }
        }
        
        return sum;
    }
};
int main()
{

    return 0;
}