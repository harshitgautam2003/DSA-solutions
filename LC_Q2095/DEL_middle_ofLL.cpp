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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*p=head,*q=head;if(p->next==NULL)return NULL;
        while(p->next!=NULL){
            q=q->next;
            p=p->next;
            if(p->next)p=p->next;
        }
        p=head;
        while(p->next!=q){
          p=p->next;  
        }
        p->next=q->next;
        delete(q);
        return head;
    }
};