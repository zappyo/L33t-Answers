#include <iostream>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = new ListNode, *res = result;
        if(list1 == NULL){
            return list2;
        }else if(list2 == NULL){
            return list1;
        }
        ListNode* tem_1 = list1, *tem_2 = list2;
        while(tem_1 != NULL || tem_2 != NULL){
            if(tem_2 == NULL){
                result->next = new ListNode;
                result = result->next;
                result->val = tem_1->val;
                tem_1 = tem_1->next;
                continue;
            }
            if(tem_1 == NULL){
                result->next = new ListNode;
                result = result->next;
                result->val = tem_2->val;
                cout << result->val << endl;
                tem_2 = tem_2->next;
                continue;
            }
            if(tem_1->val < tem_2->val){
                result->val = tem_1->val;
                if(tem_1->next != NULL){
                    result->next = new ListNode;
                    result = result->next;
                }
                tem_1 = tem_1->next;
                continue;
            }
            if(tem_2->val < tem_1->val){
                result->val = tem_2->val;
                if(tem_2->next != NULL){
                    result->next = new ListNode;
                    result = result->next;
                }
                tem_2 = tem_2->next;
                continue;
            }
            if(tem_1->val == tem_2->val){
                result->val = tem_1->val;
                tem_1 = tem_1->next;
                result->next = new ListNode;
                result = result->next;
                result->val = tem_2->val;
                if(tem_2->next != NULL && tem_1 != NULL){
                    result->next = new ListNode;
                    result = result->next;
                }
                tem_2 = tem_2->next;
            }
        }
        return res;
    }
};

 int main(){
    Solution s;
    ListNode *fr = new ListNode, *sc = new ListNode, *ch = fr, *res, *fr_hl = fr, *sc_hl = sc;
    int si, i = 0, in;
    cout << "Input Values: ";
    cin >> si;
    while(i < si){ 
        if(i > 0) fr = fr->next;
        cin >> in;
        fr->val = in;
        if((i+1) != si)fr->next = new ListNode;
        i++;
    }
    while(ch != NULL){
        cout << ch->val << endl;
        ch = ch->next;
    }
    i = 0;
    cout << "Input Values: ";
    cin >> si;
    ch = sc;
    while(i < si){
        if(i > 0) sc = sc->next;
        cin >> in;
        sc->val = in;
        if((i+1) != si)sc->next = new ListNode;
        i++;
    }
    while(ch != NULL){
        cout << ch->val << endl;
        ch = ch->next;
    }
    res = s.mergeTwoLists(fr_hl, sc_hl);
    while(res != NULL){
        cout << res->val << ",";
        res = res->next;
    }
    cout << endl;
 }