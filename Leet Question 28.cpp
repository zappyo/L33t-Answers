#include <iostream>
#include <string>
using namespace std;


class Solution{
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle) != string::npos){
            return haystack.find(needle);
        }else{
            return -1;
        }
    }
};

int main(){
    Solution s;
    string c, in;
    cin >> in;
    cin >> c;
    cout << s.strStr(in, c);

}