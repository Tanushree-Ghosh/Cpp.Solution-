#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
    void inorder(TreeNode* root,vector<int>& v)
    {
        if(!root)return;
        v.push_back(root->val);
        inorder(root->left,v);
        inorder(root->right,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        inorder(root1,ans);
        inorder(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main()
{
    
    return 0;
}