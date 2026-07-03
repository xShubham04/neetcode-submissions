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
void right(TreeNode* root,int level,vector<int>& ans,unordered_map<int,bool>& map){
    if(!root) return;
    if(!map[level]){
        ans.push_back(root->val);
        map[level]=true;
    }
    right(root->right,level+1,ans,map);
    right(root->left,level+1,ans,map);

}
    vector<int> rightSideView(TreeNode* root) {
       unordered_map<int,bool> map;
       vector<int> ans;
       right(root,0,ans,map);
       return ans;
    }
};
