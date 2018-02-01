class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convert(nums, 0, nums.size());
    }
    
    TreeNode* convert(vector<int>& nums, int start, int end){
        if(end <= start) return NULL;
        int mid = (start+end)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left=convert(nums,start,mid);
        root->right=convert(nums,mid+1,end);
        return root;
    }
};
