#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        while(nums1.size() > m){
            nums1.pop_back();
        }
        if(n == 0)return;
        int i = 0;
        while(i < n){
            nums1.push_back(nums2[i]);
            i++;
        }
        vector<int> hld = nums1;
        int c, w = 0;
        c = hld[w];
        i = 1%hld.size();
        while(hld.size() > 0){
            if(i == 0){
                nums1.push_back(c);
                nums1.erase(nums1.begin());
                hld.erase(hld.begin() + w);
                if(hld.size() > 0){
                    i = 1%hld.size();
                    c = hld[0];
                    w = 0;
                }
                continue;
            }
            if(c > hld[i]){
                w = i;
                c = hld[w];
            }
            i =(i+1)%hld.size();
        }

    }
};

int main(){
    Solution s;
    int i, sz, c = 0;
    vector<int> n1, n2;
    cin >> sz;
    while(c < sz){
        cin >> i;
        n1.push_back(i);
        c++;
    }
    cin >> sz;
    c = 0;
    while(c < sz){
        cin >> i;
        n2.push_back(i);
        c++;
    }
    c = 0;
    i = 0;
    while(i < n1.size() && n1[i] != 0){
        i++;
        c++;
    }
    s.merge(n1, c, n2, n2.size());
    i = 0;
    while(i < n1.size()){
        cout << n1[i] << " ";
        i++;
    }
    cout << endl;

}