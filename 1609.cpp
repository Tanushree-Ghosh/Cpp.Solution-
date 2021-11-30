#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
// class Solution {
// public:
//     bool isEvenOddTree(TreeNode* root) {
//         if(!root)return true;
//         queue<TreeNode*>q;
//         q.push(root);
//         int level = 0;
//         while (!q.empty())
//         {
//             int s = q.size();
//             int prev;
//             if(level%2 == 0)
//             {
//                 prev = INT_MIN;
//             }else{
//                 prev = INT_MAX;
//             }
//             for (int i = 0; i < s; i++)
//             {
//                 TreeNode* temp = q.front();
//                 q.pop();
//                 if(level%2 == 0)
//                 {
//                     if (temp->val%2 == 0)
//                     {
//                         return false;
//                     }
//                     if (prev >= temp->val)
//                     {
//                         return false;
//                     }
                    
//                 }
//                 else{
//                     if (temp->val%2 != 0)
//                     {
//                         return false;
//                     }
//                     if (prev <= temp->val)
//                     {
//                         return false;
//                     }
//                 }
//                 if(temp->left)q.push(temp->left);
//                 if(temp->right)q.push(temp->right);
//                 prev = temp->val;
//             }
//             level++;
//         }return true;
//     }
// };
class Solution
{
public:
    bool iseven(int no)
    {
        if (no % 2 == 0)
        {
            return true;
        }
        return false;
    };
   
    bool isEvenOddTree(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        int level = 0;
       
        
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            int tempvar = INT_MIN;
            if (temp != NULL)
            {
                if (level % 2 == 0)
                {
                    if (tempvar >= temp->val)
                    {
                        return false;
                    }

                    if (temp->val%2==0)
                    {
                        return false;
                    }
                    tempvar = temp->val;
                }
                if (level % 2 != 0)
                {
                    if (tempvar <= temp->val)
                    {
                        return false;
                    }
                    if (temp->val%2!=0)
                    {
                        return false;
                    }
                    tempvar = temp->val;
                }
                  if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
            else
            {
                q.push(NULL);
                level++;
                if (level%2==0)
                {
                    tempvar = INT_MIN;
                }
                else{
                
                    tempvar = INT_MAX;
                }
                
            }
        }
        return true;
    }
};
int main()
{
    
    return 0;
}