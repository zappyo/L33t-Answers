#include <iostream>
#include <vector>
using namespace std;


class Solution {
    
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int h = 0, i = 1, size = nums.size();
            vector<int> nubs;
            while(h < size){
                cout << nums[h]+nums[i] << endl;
                if((nums[h]+nums[i]) == target){
                    if(i < h){
                        nubs.push_back(i);
                        nubs.push_back(h);
                    }
                    if(h < i || h == i){
                        nubs.push_back(h);
                        nubs.push_back(i);
                    }
                    break;
                }
                if((i += 1) < size){
                    i++;
                    continue;
                }
                h++;
                i = 0;
            }
            return nubs;
        }
};


int main(){
        Solution s;
        int i;
        vector<int> iN;
        cin >> i;
        iN.push_back(i);
        cin >> i;
        iN.push_back(i);
        cin >> i;
        iN.push_back(i);
        cin >> i;
        iN.push_back(i);
        cin >> i;
        iN.push_back(i);
        iN = s.twoSum(iN, 10);
        for(int x: iN){
            cout << x << ", ";
        }


}

