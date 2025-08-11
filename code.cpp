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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> test;
        vector <int> ans,ans1;
        if(root==NULL) return ans;
        vector <vector<int>> vec1;
        test.push(root);
        test.push(NULL);
        while(!test.empty()){
            TreeNode* check = test.front();
            test.pop();
            if(check==NULL){
                if(test.size()>0) test.push(NULL);
                vec1.push_back(ans);
                ans.clear();
            }
            else{
                ans.push_back(check->val);
                if(check->left!=NULL){
                    test.push(check->left);
                }
                if(check->right!=NULL){
                    test.push(check->right);
                }
            }
        }
        for(int i=0;i<vec1.size();i++){
            ans1.push_back(vec1[i][vec1[i].size()-1]);
        }
        return ans1;
    }
};
