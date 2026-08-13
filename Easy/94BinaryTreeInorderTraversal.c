/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void sizeCalc(struct TreeNode* root, int* returnSize, int* ls) {
    if (root == NULL) {
        return;
    }
    sizeCalc(root->left, returnSize, ls);
    ls[*returnSize] = root->val;
    (*returnSize)++;
    sizeCalc(root->right, returnSize, ls);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int *ls = (int *)malloc(1000 * sizeof(int));
    sizeCalc(root, returnSize, ls);
    return ls;
}