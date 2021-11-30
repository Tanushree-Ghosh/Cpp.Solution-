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
int total = 0;
    void sum(TreeNode *root,int current)
    {
        if(!root)return;
        current *= 2;
        current += root->val;
        if(!root->left && !root->right)
        {
            total += current;
        }
        sum(root->left,current);
        sum(root->right,current);
    }
    int sumRootToLeaf(TreeNode *root)
    {
        sum(root, 0);
        return total;
    }
};
int main()
{

    return 0;
}