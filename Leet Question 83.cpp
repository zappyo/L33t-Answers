#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head->next)return head;
        ListNode *fr,*hld,*adv,*pre;
        fr = head;
        hld = fr;
        adv = hld->next;
        pre = hld;
        while(fr->next != nullptr){
            if(adv == nullptr){
                hld = fr->next;
                fr = fr->next;
                adv = hld->next;
                pre = hld;
                continue;
            }
            if(adv->val == hld->val){
                pre->next = adv->next;
                adv = pre->next;
                continue;
            }
            adv = adv->next;
            pre = pre->next;
        }
        return head;
    }
};


int main(){
    Solution s;
    ListNode *l, *hld;
    l = new ListNode();
    int i, c = 0, sz;
    cin >> sz;
    if(sz > 0)cin >> i;
    l->val = i;
    l->next = new ListNode();
    hld = l->next;
    c++;
    while(c < sz){
        cin >> i;
        hld ->val = i;
        hld->next = new ListNode();
        hld = hld->next;
        c++;
    }
    hld = l;
    c = 0;
    while(hld){
        cout << hld->val << "->";
        hld = hld->next;
        c++;
    }
    if(hld == nullptr)cout << "Jackpot" << endl;
    cout << endl;
    l = s.deleteDuplicates(l);
     hld = l;
    c = 0;
    while(hld->next){
        cout << hld->val << "->";
        hld = hld->next;
        c++;
    }
    cout << endl;


}