#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0, size = s.size(), pr;
        for(int i = 0; i < size; i++){
            pr = i-1;
            switch (s[i])
            {
            case 'I':
                sum += 1;
                break;
            case 'V':
                sum += 5;
                if(pr > -1){
                    if(s[pr] == 'I'){
                        sum -= 2;
                    }
                }
                break;
            case 'X':
                sum += 10;
                if(pr > -1){
                    if(s[pr] == 'I'){
                        sum -= 2;
                    }
                }
                break;
            case 'L':
                sum += 50;
                if(pr > -1){
                    if(s[pr] == 'X'){
                        sum -= 20;
                    }
                }
                break;
            case 'C':
                if(pr > -1){
                    if(s[pr] == 'X'){
                        sum -= 20;
                    }
                }
                sum += 100;
                break;
            case 'D':
                if(pr > -1){
                    if(s[pr] == 'C'){
                        sum -= 200;
                    }
                }
                sum +=500;
                break;
            case 'M':
                if(pr > -1){
                    if(s[pr] == 'C'){
                        sum -= 200;
                    }
                }
                sum += 1000;
                break;
            }
        }
        return sum;
    }
};

int main(){
    Solution s;
    int sol;
    string iN;
    cin >> iN;
    sol = s.romanToInt(iN);
    cout << sol << endl;



}
