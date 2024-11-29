class Solution {
public:

    int dep=0;
    void depth(TreeNode* node,int cur){
        if (node == nullptr){
            return;
        }
    dep=max(dep,cur);
    depth(node->left,cur+1);
    depth(node->right,cur+1);
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        depth(root,1);
        return dep;
    }
};
