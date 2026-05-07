#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution{
public:
    string addBinary(string a, string b) {
        if(b.size() < 1)return a;
        if(a.size() < 1)return b;
        vector<int> b1,b2;
        string res = "";
        for(char b: a){
            b1.push_back(b-'0');
        }
        for(char b: b){
            b2.push_back(b-'0');
        }
        int i = b1.size()-1, c = b2.size()-1, car = 0, j;
        if(i <= c){
            while(i > -1){
                j = b1[i] + b2[c] + car;
                if(j > 1){
                    if(j == 2)res += '0';
                    if(j == 3)res += '1';
                    car = 1;
                    i--;
                    c--;
                    continue;
                }
                res += to_string(j);
                car = 0;
                i--;
                c--;
            }
            if(car == 1){
                while(c > -1){
                    j = b2[c] + car;
                    if(j > 1){
                        if(j == 2)res += '0';
                        if(j == 3)res += '1';
                        car = 1;
                        c--;
                        continue;
                    }
                    res += to_string(j);
                    car = 0;
                    c--;
                }
                if(car == 1)res += '1';
            }
            while(c > -1){
                j = b2[c] + car;
                if(j > 1){
                    if(j == 2)res += '0';
                    if(j == 3)res += '1';
                    car = 1;
                    c--;
                    continue;
                }
                res += to_string(j);
                car = 0;
                c--;
            }
            reverse(res.begin(),res.end());
            return res;
        }
        if(i > c){
            while(c > -1){
                j = b1[i] + b2[c] + car;
                if(j > 1){
                    if(j == 2)res += '0';
                    if(j == 3)res += '1';
                    car = 1;
                    i--;
                    c--;
                    continue;
                }
                res += to_string(j);
                car = 0;
                i--;
                c--;
            }
            if(car == 1){
                while(i > -1){
                    j = b1[i] + car;
                    if(j > 1){
                        if(j == 2)res += '0';
                        if(j == 3)res += '1';
                        car = 1;
                        i--;
                        continue;
                    }
                    res += to_string(j);
                    car = 0;
                    i--;
                }
                if(car == 1)res += '1';
            }
            while(i > -1){
                j = b1[i] + car;
                if(j > 1){
                    if(j == 2)res += '0';
                    if(j == 3)res += '1';
                    car = 1;
                    i--;
                    continue;
                }
                res += to_string(j);
                car = 0;
                i--;
            }
            reverse(res.begin(),res.end());
            return res;
        }
        return res;
    }
};

int main(){
    Solution s;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    cout << s.addBinary(s1,s2);
}