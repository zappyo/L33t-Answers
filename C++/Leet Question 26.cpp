/// Time: ~6 mins

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        

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
    i = s.removeDuplicates(iN);


}
