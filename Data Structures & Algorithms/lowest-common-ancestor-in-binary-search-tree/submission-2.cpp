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
        unordered_map<TreeNode*,TreeNode*> map;
        queue<TreeNode*> que;
        que.push(root);
        map[root]=NULL;
        bool found=false;
        while(!que.empty() && !found){
            int size=que.size();
            for(int i=0;i<size;i++){
                TreeNode* front=que.front();
                que.pop();
                if(front->left){
                    que.push(front->left);
                    map[front->left]=front;
                }
                if(front->right){
                    que.push(front->right);
                    map[front->right]=front;
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
