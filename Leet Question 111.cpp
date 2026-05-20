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

class Solution{
public:
    int minDepth(TreeNode* root) {
        if(root == nullptr)return 0;
        int lft = 1+minDepth(root->left);
        int rgt = 1+minDepth(root->right);
        if(lft < rgt && lft != 1)return lft;
        if(lft > rgt && rgt != 1)return rgt;
        if(lft < rgt)return rgt;
        if(lft > rgt)return lft;
        return lft;
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
    cout << s.minDepth(t);
}