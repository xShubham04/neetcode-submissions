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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        queue<TreeNode*> que;
        unordered_map<TreeNode*,TreeNode*> map;
        que.push(root);
        map[root]=NULL;
        bool found=false;
        while(!que.empty() && !found){
            int size=que.size();
            for(int i=0;i<size;i++){
                TreeNode* node=que.front();
                que.pop();
                if(node->left){
                    que.push(node->left);
                    map[node->left]=node;
                }
                if(node->right){
                    que.push(node->right);
                    map[node->right]=node;
                }
                if(map.count(p) && map.count(q)){
                    found=true;
                    break;
                }
            }
        }
        unordered_set<TreeNode*> set;
        while(p){
            set.insert(p);
            p=map[p];
        }
        while(q){
            if(set.count(q)) return q;
            q=map[q];
        }
        return q;
    }
};
