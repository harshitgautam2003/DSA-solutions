class Solution {
public:
    void add(ListNode**p,int data){
        ListNode *a=new ListNode(data);
        if(*p==NULL){*p=a;return;}
        else{
            ListNode*q=*p;while(q->next!=NULL){
                q=q->next;
            }
            q->next=a;
        }
        return;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *ans = NULL;
        int carry = 0;
        int sum = l1->val + l2->val;
        while (l1 || l2 || carry)
        {
            int val1 = 0, val2 = 0;
            if (l1)
                val1 = l1->val;
            if (l2)
                val2 = l2->val;
            sum = val1 + val2 + carry;

            add(&ans, sum % 10);
            carry = sum / 10;

            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        return ans;

    }
};