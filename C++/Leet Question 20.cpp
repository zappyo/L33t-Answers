#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        int n = 1, i = 0, j = (s.size()-1);
        bool chk = false;
        if(s.size() == 1 || s.size()%2 == 1){
            return false;
        }
        while(i < s.size()){
            cout << s[i] << endl;
            cout << s << endl;
            switch (s[i])
            {
            case '(':
                if(n < s.size()){
                    if(s[n] == ')'){
                        s.erase(s.begin() + i);
                        s.erase(s.begin() + (n-1));
                        if(chk){
                            i = 0;
                            n = 1;
                            chk = false;
                        }
                        continue;
                    }
                    else if( s[j] == ')'){
                        s.erase(s.begin() + i);
                        s.erase(s.begin() + (j-1));
                        j = (s.size()-1);
                        if(chk){
                            return false;
                        }
                        continue;
                    }else if(s[n] == '[' || s[n] == '{' || s[n] == '('){
                        i = n;
                        n = i + 1;
                        chk = true;
                        continue;
                    }
                }
                return false;
                break;
            case '{':
                if(n < s.size()){
                        if(s[n] == '}'){
                            s.erase(s.begin() + i);
                            s.erase(s.begin() + (n-1));
                            if(chk){
                                i = 0;
                                n = 1;
                                chk = false;
                            }
                            continue;
                        }else if(s[j] == '}'){
                            s.erase(s.begin() + i);
                            s.erase(s.begin() + (j-1));
                            j = (s.size()-1);
                            if(chk){
                                return false;
                            }
                            continue;
                        }else if(s[n] == '[' || s[n] == '{' || s[n] == '('){
                            i = n;
                            n = i + 1;
                            chk = true;
                            continue;
                        }
                    }
                return false;
                break;
            case '[':
                if(n < s.size()){
                    if(s[n] == ']'){
                        s.erase(s.begin() + i);
                        s.erase(s.begin() + (n-1));
                        if(chk){
                            i = 0;
                            n = 1;
                            chk = false;
                        }
                        continue;
                    }else if(s[j] == ']'){
                        s.erase(s.begin() + i);
                        s.erase(s.begin() + (j-1));
                        j = (s.size()-1);
                        if(chk){
                            return false;
                        }
                        continue;
                    }else if(s[n] == '[' || s[n] == '{' || s[n] == '('){
                        i = n;
                        n = i + 1;
                        chk = true;
                        continue;
                    }
                }
                return false;
                break;
            default:
                return false;
            }
        }
        return true;
    }
};



int main(){
    Solution s;
    string iN;
    bool stat;
    cin >> iN;
    stat = s.isValid(iN);
    cout << stat << endl;

}
