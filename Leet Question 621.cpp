#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
private:
    vector<char> pre;
    vector<int> col_t, reps;
    int mov = 0;
public:
    int leastInterval(vector<char>& str, int wait){
        int i = 1, c = 0, m = 0, s;
        reps.push_back(1);
        while(str.size() > 0 && i  < str.size()){
            if(str[0] == str[i]){
                str.erase(str.begin() + i);
                if(str.size() < 1)continue;
                if(i == 0){
                    i = 1;
                    reps.push_back(1);
                    c++;
                    continue;
                }
                reps[c]++;
                if(i >= str.size())i = 0;
                continue;
            }
            i = (i+1)%str.size();
        }
        c = 0;
        sort(reps);

        while(reps.size() > 0){
            if(reps.size() > wait){
               reps[0]--;
                mov += 1;
                progress(reps,wait);
                remove(reps);
                if(reps.size() > 0)sort(reps);
                continue;
            }
            if(reps.size() <= wait){
                mov += reps.size();
                s = reps.size();
                deCount(reps);
                remove(reps);
                if(reps.size() > 0)sort(reps);
                if(reps.size() > 0){
                    if(wait > 1){
                        mov += (wait-s)+1;
                        continue;
                    }
                    if(reps.size() == 1 && wait == 1)mov += (wait-s)+1;
                }
                continue;
            }

        }
        return mov;
    }


    void sort(vector<int>& rep){
        vector<int> hld = rep;
        int i, c, w = 0;
        c = hld[w];
        i = 1%hld.size();
        while(hld.size() > 0){
            if(i == 0){
                rep.push_back(c);
                rep.erase(rep.begin());
                hld.erase(hld.begin() + w);
                if(hld.size() > 0){
                    i = 1%hld.size();
                    c = hld[0];
                    w = 0;
                }
                continue;
            }
            if(c < hld[i]){
                w = i;
                c = hld[w];
            }
            i =(i+1)%hld.size();
        }
    }

    void progress(vector<int>& rep, int w){
        int i = 1;
        while(w > 0){
            rep[i]--;
            mov += 1;
            w--;
            i++;
        }
    }


    void deCount(vector<int>& rep){
        int i = 0;
        while(i < rep.size()){
            rep[i]--;
            i++;
        }
    }

    void remove(vector<int> reo){
        int i = 0;
        while(i < reps.size()){
            if(reps[i] < 1){
                reps.erase(reps.begin() + i);
                i = 0;
                continue;
            }
            i++;
        }
    }

    void print(vector<int>& rep){
        int i = 0;
        while(i < rep.size()){
            cout << rep[i];
            i++;
        }

    }


};


int main (){
    Solution s;
    char in;
    string str;
    int si, i = 0;
    cin >> str;
    cin >> si;
    vector<char> iN(str.begin(),str.end());
    i = s.leastInterval(iN, si);
    cout << "Value H: " << i << endl;
    cout << "HELP";

}