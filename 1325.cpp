#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(!root)return NULL;
        root->left = removeLeafNodes(root->left,target);
        root->right = removeLeafNodes(root->right,target);
        if (!root->left && !root->right && root->val == target)
        {
            root = NULL;
        }
        return root;
    }
};
int main()
{
    
    return 0;
}