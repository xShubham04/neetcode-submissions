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
public:
void right(TreeNode* root,int level,unordered_map<int,bool>& map,vector<int>& ans){
    if(!root) return;
    if(!map[level]){
        map[level]=true;
        ans.push_back(root->val);
    }
    right(root->right,level+1,map,ans);
    right(root->left,level+1,map,ans);
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        unordered_map<int,bool> map;
        right(root,0,map,ans);
        return ans;
    }
};
