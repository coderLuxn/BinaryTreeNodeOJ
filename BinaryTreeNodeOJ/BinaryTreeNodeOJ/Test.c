#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
  
  struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
  };
 

  //ǰ�� ������
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
    ++(*pi);//�ֲ�����
    _prevOrder(root->left, a, pi);
    _prevOrder(root->right, a, pi);
}

int main()
{
    struct TreeNode s;
    return 0;
}