/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return NULL;
        ListNode* r = new ListNode(-1);
        ListNode* c= head;
        ListNode* p= NULL;
        ListNode* l= r;
        int num = 0;
        while(c){
            c = c->next;
            num++;
        }
        c = head;
        while(num >= k){
            ListNode* tail = c;
            for(int i = 0; i < k; i++){
                ListNode* temp = c->next;
                c->next = p;
                p = c;
                c = temp;
            }
            l->next = p;
            l= tail;
            num -= k;
        }
        l->next = c;
        return r->next;
    }
};