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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
        return head;
    ListNode* temp = head;
    ListNode* curr = head;
    ListNode* p = head;
    int n = 0;
    
    while (temp) {
        temp = temp->next;
        n++;
    }
    
    k= (n - k % n) - 1;
    
    while (k) {
        curr = curr->next;
        k--;
    }
    
    ListNode* Kn = curr;
    while (curr->next)
        curr = curr->next;
    
    curr->next = head;
    p = Kn->next;
    Kn->next = NULL;
    
    return p;
    }
};