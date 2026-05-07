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
private:
    vector<int> l;

public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root->left != nullptr)inorderTraversal(root->left);
        l.push_back(root->val);
        if(root->right != nullptr)inorderTraversal(root->right);
        return l;
    }
};

int main(){
    Solution s;
    vector<int> l;
    int i, sz, c = 0;
    TreeNode *t, lf, rt;
    t = new TreeNode();
    t->left = new TreeNode();
    t->right = new TreeNode();
    cin >> i;
    t->val = i;
    cin >> i;
    t->left->val = i;
    cin >> i;
    t->right->val = i;
    l = s.inorderTraversal(t);
    while(c < l.size()){
        cout << l[c] << ",";
        c++;
    }
    cout << endl;
}