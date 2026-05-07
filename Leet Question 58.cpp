#include <iostream>
#include <string>
using namespace std;

class Solution{
public:
    int lengthOfLastWord(string s) {
        if(s.size() < 1)return s.size();
        int i = s.size()-1, cnt = 0;
        while(i > -1){
            if(s[i] != ' '){
                cnt += 1;
                i--;
                while(i > -1 && s[i] != ' '){
                    cnt += 1;
                    i--;
                }
                return cnt;
            }
            i--;
        }
        return cnt;
    }
};

int main(){
    Solution s;
    string str;
    getline(cin, str);
    cout << str << endl;
    cout << s.lengthOfLastWord(str);
}