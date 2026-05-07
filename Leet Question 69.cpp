#include <iostream>
using namespace std;

class Solution{
public:
    int mySqrt(int x) {
        if(x == 0)return 0;
        int sq;
        long long i = 1;
        while(i*i < x){
            i++;
        }
        if(i*i > x)i--;
        sq = (i)+(x-(i*i))/(2*i);
        long long m = (i+1);
        if((m*m)-1 == x)sq--;
        return sq;
    }
};

int main(){
    Solution s;
    int i;
    cin >> i;
    cout << s.mySqrt(i);
}