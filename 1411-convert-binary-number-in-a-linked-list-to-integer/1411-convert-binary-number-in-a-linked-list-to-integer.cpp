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
    int getDecimalValue(ListNode* head) {
        ListNode*newhead=reversefunc(head);
        int rett=0;
        int multi=0;
        while(newhead){
            if(newhead->val!=0){
                rett=rett+pow(2,multi);
            }
            multi++;
            newhead=newhead->next;
        }
        return rett;
    }
    ListNode * reversefunc(ListNode*head){
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*nextt=NULL;
        while(curr){
            nextt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextt;
        }
        return prev;
    }
};