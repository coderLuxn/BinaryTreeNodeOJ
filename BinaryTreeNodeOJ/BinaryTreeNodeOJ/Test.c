#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
  
  struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
  };
 

  //前序 根左右
int TreeSize(struct TreeNode* root)
{
    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}

void _prevOrder(struct TreeNode* root, int* a, int* pi)
{
    if (root == NULL)
    {
        return;
    }
    a[*pi] = root->val;
    ++(*pi);//局部变量
    _prevOrder(root->left, a, pi);
    _prevOrder(root->right, a, pi);
}

int main()
{
    struct TreeNode s;
    return 0;
}