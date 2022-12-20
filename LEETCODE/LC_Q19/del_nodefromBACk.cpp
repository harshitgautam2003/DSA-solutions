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
    int length(ListNode*head){
        int count=0;ListNode*p=head;
        while(p){
            count++;
            p=p->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL||head->next==NULL)return NULL;
        int x=length(head);
        x=x-n;
        if(x==0){
            head=head->next;
            return head;
        }
        ListNode*p=head;ListNode*q=head;
        while(x){
            x--;
            p=q;
            q=q->next;
        }
        p->next=q->next;
        delete(q);
        return head;
    }
};