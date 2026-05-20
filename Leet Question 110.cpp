#include <iostream>
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
    bool isBalanced(TreeNode* root) {
        return heightCheck(root) != -1;
    }

    int heightCheck(TreeNode* r){
        if(r == nullptr)return 0;
        int lftht = heightCheck(r->left);
        if(lftht == -1)return -1;
        int rgtht = heightCheck(r->right);
        if(rgtht == -1)return -1;
        if(lftht-rgtht > 1 || lftht-rgtht < -1){
            return -1;
        }
        if(lftht > rgtht)return lftht+1;
        if(lftht < rgtht)return rgtht+1;
        return lftht+1;
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
    cout << s.isBalanced(t);
}