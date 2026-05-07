#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() < 2)return nums.size();
        vector<int> hld = nums;
        int i, c, w = 0;
        c = hld[w];
        i = 1%hld.size();
        while(hld.size() > 0){
            if(i == 0){
                nums.push_back(c);
                nums.erase(nums.begin());
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
        i = 0;
        while(i < nums.size()){
            if(nums[i] == val){
                nums.erase(nums.begin() + i);
                continue;
            }
            i++;
        }

        return nums.size();
    }
};


int main() {
    Solution s;
    vector<int> iN;
    int i,sz,c = 0, t;
    cin >> sz;
    cin >> t;
    while(c < sz){
        cin >> i;
        iN.push_back(i);
        c++;
    }
    i = s.removeElement(iN, t);
    cout << i << endl;
}