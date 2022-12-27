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
   
    void reorderList(ListNode* head) {
         vector<ListNode*> arr;
        ListNode*p=head;
        while(p){
            arr.push_back(p);p=p->next;}
        
        int first = 1, second = size(arr)-1;
        for(int i = 0; i < size(arr); i++){ 
            if(i%2 & 1) head -> next = arr[first++];          
            else head -> next = arr[second--]; 
            head = head -> next;
        }
        head -> next = NULL;
    } 
};