#include <iostream>
using namespace std;

class Solution{
public:
    int climbStairs(int n) {
        if(n < 1)return 0;
        if(n == 1)return 1;
        int i = 1, c = 1, m;
        while(n > 0){
            m = i;
            i += c;
            c = m;
            n--;
        }
        return c;
    }
};

int main(){
    Solution s;
    int i;
    cin >> i;
    cout << s.climbStairs(i);
}