/**********************************************************
采用递归的方式遍历左右子树，判断是否对称
**********************************************************/
/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
    bool IsSymmetrical(TreeNode* pRoot1,TreeNode* pRoot2)
    {
        if(pRoot1==NULL && pRoot2 == NULL)
           return true;
        if((pRoot1 == NULL && pRoot2 != NULL) || (pRoot2 == NULL && pRoot1 != NULL))
           return false;
    	if(pRoot1->val != pRoot2->val)
            return false;
        return IsSymmetrical(pRoot1->left,pRoot2->right) && IsSymmetrical(pRoot1->right,pRoot2->left);
        
    }
    bool isSymmetrical(TreeNode* pRoot)
    {
    	if(pRoot == NULL)
            return true;
        return IsSymmetrical(pRoot->left,pRoot->right);
        
    }

};
