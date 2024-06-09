#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = "", temp;
        int i = 2, size = strs.size(), f_size = strs[0].size(), s_size = strs[0].size();
        if(strs.size() == 1){
            return pre;
        }
        for(int a = 0; a < f_size && a < s_size; a++){
            if(strs[0][a] == strs[1][a]){
                pre += strs[0][a];
                continue;
            }
            break;
        }
        while(i < size){
            temp = strs[i].substr(0,pre.size());
            if(temp == pre){
                i++;
                continue;
            }
            vector<string> hld;
            hld.push_back(pre);
            hld.push_back(temp);
            pre = longestCommonPrefix(hld);
            if(pre != ""){
                i++;
                continue;
            }
            return "";
        }
        return pre;
    }
};

int main(){
    Solution s;
    int size;
    cin >> size;
    vector<string> iN;
    string oUT;
    for(int i = 0; i < size; i++){
        cin >> oUT;
        iN.push_back(oUT);
    }
    oUT = s.longestCommonPrefix(iN);
    cout << oUT << endl;


}