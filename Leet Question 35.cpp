#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        while(i < nums.size()){
            if(nums[i] >= target){
                if(nums[i] == target){
                    return i;
                }else{
                    return i;
                }
            }
            i++;
        }
        return i;
    }
};

int main(){
    Solution s;
    vector<int> iN;
    int sz, i, c = 0, t, w = 0;
    cin >> sz;
    cin >> t;
    while(c < sz){
        cin >> i;
        iN.push_back(i);
        c++;
    }
    vector<int> hld = iN;
    c = hld[w];
    i = 1%hld.size();
    while(hld.size() > 0){
        if(i == 0){
            iN.push_back(c);
            iN.erase(iN.begin());
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
    while(i < iN.size()){
        cout << iN[i] << " ";
        i++;
    }
    cout << endl;

    cout << s.searchInsert(iN, t);
}