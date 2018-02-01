class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<int> level;
        vector<vector<int>> res;
        TreeNode *temp, *temp1;
        if(root == NULL) return res;
        queue<TreeNode*> cur;
        queue<TreeNode*> child;
        cur.push(root);
        while(cur.empty() == false){
            temp = cur.front();
            level.push_back(temp->val);
            if(temp->left!=NULL)
                child.push(temp->left);
            if(temp->right!=NULL)
                child.push(temp->right);
            cur.pop();
            if(cur.empty()){
                res.insert(res.begin(),level);
                level.clear();
                while(!child.empty()){
                    temp1 = child.front();
                    cur.push(temp1);
                    child.pop();
                }
                //+;
            }
        }
        return res;
    }
};
