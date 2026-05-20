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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solution(nums, 0, nums.size()-1);
    }
    TreeNode* solution(vector<int>& n, int l, int r){
        if(l > r){
            return nullptr;
        }
        int mid = l+(r-l)/2;
        TreeNode *res = new TreeNode(n[mid]);
        res->left = solution(n,l,mid-1);
        res->right = solution(n,mid+1,r);
        return res;
    }
};

int main(){
    Solution s;
    vector<int> in;
    int i = 0, sz, c;
    TreeNode *t, *h;
    cin >> sz;
    while(i < sz){
        cin >> c;
        in.push_back(c);
        i++;
    }
    vector<int> hld = in;
    int w = 0;
    c = hld[w];
    i = 1%hld.size();
    while(hld.size() > 0){
        if(i == 0){
            in.push_back(c);
            in.erase(in.begin());
            hld.erase(hld.begin() + w);
            if(hld.size() > 0){
                i = 1%hld.size();
                c = hld[0];
                w = 0;
            }
            continue;
        }
        if(c > hld[i]){
            w = i;
            c = hld[w];
        }
        i =(i+1)%hld.size();
    }
    t = s.sortedArrayToBST(in);
    h = t;
    while(h){
        cout << h->val << "->";
        h = h->left;
    }
    cout << endl;
    h = t;
    while(h){
        cout << h->val << "->";
        h = h->right;
    }
    cout << endl;


}