/// Time: ~6 mins

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 2)return nums.size();
        int i = 0, c = 1;
        while(c < nums.size()){
            if(c < i){
                c = (c+1)%nums.size();
                continue;
            }
            if(c == i){
                i++;
                c = i+1;
                continue;
            }
            if(nums[i] == nums[c]){
                nums.erase(nums.begin() + c);
                continue;
            }
            c = (c+1)%nums.size();
        }
        return nums.size();
    }
};


int main(){
    Solution s;
    vector<int> iN;
    int si, i = 0, in;
    cin >> si;
    while(i < si){
        cin >> in;
        iN.push_back(in);
        i++;
    }
    cout << endl;
    i = s.removeDuplicates(iN);
    cout << i << endl;

}
