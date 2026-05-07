#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1] += 1;
        if(digits[digits.size()-1] > 9){
            int i = digits.size()-2;
            while(i > -1){
                digits[i+1] = 0;
                digits[i] += 1;
                cout << digits[i+1] << " " << digits[i] << endl;
                if(digits[i] < 10){
                    break;
                }
                i--;
            }
            i += 1;
            if(i == 0){
                digits[0] = 0;
                digits.push_back(1);
                reverse(digits.begin(), digits.end());
            }
        }
        return digits;
    }
};

int main(){
    Solution s;
    vector<int> iN;
    int sz, i, c = 0;
    cin >> sz;
    while(c < sz){
        cin >> i;
        iN.push_back(i);
        c++;
    }

    iN = s.plusOne(iN);

    c = 0;
    while(c < iN.size()){
        cout << iN[c];
        c++;
    }

}
