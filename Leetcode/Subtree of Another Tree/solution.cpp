/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

    void traverse(TreeNode* tree,vector<int>& v){
            // v.push_back(tree);

            if(tree==NULL) v.push_back(-(2e4));
            else v.push_back(tree->val);

            if(tree==NULL) return ;

            traverse(tree->left,v);
            traverse(tree->right,v);
    }

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        vector<int> v1,v2;

        traverse(root,v1);
        traverse(subRoot,v2);

        auto it=search(v1.begin(),v1.end(),v2.begin(),v2.end());

        return it!=v1.end();

    }
};
