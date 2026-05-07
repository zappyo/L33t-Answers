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
private:
    bool res = true;
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q != nullptr)return false;
        if(p != nullptr && q == nullptr)return false;
        if(p == nullptr && q == nullptr)return res;
        if(p->left != nullptr && q->left != nullptr){
            res = isSameTree(p->left, q->left);
        }else if(p->left != nullptr && q->left == nullptr){
            return false;
        }else if(p->left == nullptr && q->left != nullptr){
            return false;
        }

        if(p->val != q->val){
            return false;
        }
        
        if(p->right != nullptr && q->right != nullptr){
            res = isSameTree(p->right, q->right);
        }else if(p->right != nullptr && q->right == nullptr){
            return false;
        }else if(p->right == nullptr && q->right != nullptr){
            return false;
        }

        return res;
    }
};

int main(){
    Solution s;
    TreeNode *t1, *t2;
    int i;
    t1 = new TreeNode();
    t2 = new TreeNode();
    t1->left = new TreeNode();
    t1->right = new TreeNode();
    t2->left = new TreeNode();
    t2->right = new TreeNode();
    cin >> i;
    t1->val = i;
    cin >> i;
    t1->left->val = i;
    cin >> i;
    t1->right->val = i;
    cin >> i;
    t2->val = i;
    cin >> i;
    t2->left->val = i;
    cin >> i;
    t2->right->val = i;
    cout << s.isSameTree(t1, t2);
}