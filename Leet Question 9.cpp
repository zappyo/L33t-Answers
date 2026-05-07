#include <iostream>
#include <string>
using namespace std;

class Solution {

public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        if(s.size()%2 == 1){
            int i = 0, c = s.size()-1;
            while(i != c){
                if(s[i] != s[c]){
                    return false;
                }
                i++;
                c--;
            }
        }
        if(s.size()%2 == 0){
            int i = 0, c = s.size()-1;
            while(i < c){
                if(s[i] != s[c]){
                    return false;
                }
                i++;
                c--;
            }
        }
        return true;
    }
};

int main(){
    Solution s;
    int i;
    bool res;
    cin >> i;
    res = s.isPalindrome(i);
    cout << "This is a Palidrome: " << res << endl;
}