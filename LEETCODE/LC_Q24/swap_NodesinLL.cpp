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
    ListNode* swapPairs(ListNode* head) {
        if(!head||head->next==NULL)return head;
        ListNode*p=head,*q=head->next,*r=new ListNode(-1);
        head=head->next;
        while(p&&q){
            p->next=q->next;
            r->next=q;
            q->next=p;
            r=p;
            p=p->next;
            if(p)q=p->next;
        }
        return head;
    }
};