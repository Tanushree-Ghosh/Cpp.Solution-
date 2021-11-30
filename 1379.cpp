#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

};
class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*> q;
        q.push(cloned);
        while (!q.empty())
        {
            if(q.front()->val == target->val)
            {
                break;
            }
            if(q.front()->left != NULL)
            {
                q.push(q.front()->left);
            }
            if(q.front()->right != NULL)
            {
                q.push(q.front()->right);
            }q.pop();
        }return q.front();
        
    }
};
int main()
{
    
    return 0;
}