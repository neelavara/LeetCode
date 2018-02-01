class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return check(root->left, root->right);
    }
    
    bool check(TreeNode *tree1, TreeNode *tree2){
        if(tree1==NULL && tree2 == NULL) return true;
        if(tree1 == NULL || tree2 == NULL) return false;
        return tree1->val == tree2->val && check(tree1->left, tree2->right) && check(tree1->right, tree2->left);
    }
};
