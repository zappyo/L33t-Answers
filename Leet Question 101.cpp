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
    bool isSymmetric(TreeNode* root) {
        return yes(root->left, root->right);
    }

    bool yes(TreeNode *rtl,TreeNode *rtr){
        if(!rtl && !rtr)return true;
        if(!rtl || !rtr) return false;
        return (rtl->val == rtr->val) && yes(rtl->left, rtr->right) && yes(rtl->right, rtr->left);
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
    cout << s.isSymmetric(t);
}