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
    ListNode* mergetwo(ListNode *a,ListNode *b){
        if(!a&&!b)return NULL;
        if(!a)return b;
        if(!b)return a;ListNode*temp=NULL;
            if(a->val>b->val){
                temp=b;
                temp->next=mergetwo(a,b->next);
            }
            else{
                temp=a;
                temp->next=mergetwo(a->next,b);
            }
        
        return temp;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return NULL;
        for(int i=1; i<lists.size(); i++)
            lists[0] = mergetwo(lists[0],lists[i]);
        return lists[0];
    }
};