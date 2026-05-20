#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        int i = 0;
        if(!root)return i;
        if(!root->left && !root-> right)return 1;
        vector<int> lr;
        if(root->left)i = 1+maxDepth(root->left);
        if(lr.size() < 1){
            lr.push_back(i);
        }else{
            lr[0] = i;
        }
        i = 0;
        if(root->right)i = 1+maxDepth(root->right);
        if(lr.size() < 2){
            lr.push_back(i);
        }else{
            lr[1] = i;
        }
        if(lr[0] >= lr[1]){
            return lr[0];
        }
        if(lr[0 < lr[1]]){
            return lr[1];
        }
        return lr[0];
    }
};

int main(){
    Solution s;
    TreeNode *t;
    int i;
    t = new TreeNode();
    t->left = new TreeNode();
    t->right = new TreeNode();
    cin >> i;
    t->val = i;
    cin >> i;
    t->left->val = i;
    cin >> i;
    t->right->val = i;
    cout << s.maxDepth(t);
}