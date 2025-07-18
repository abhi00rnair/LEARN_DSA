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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*rett=NULL;
        ListNode*prev=NULL;
        ListNode*tp=head;
        while(tp){
            if(tp->val<x){
                ListNode*temp=new ListNode(tp->val);
                if(rett==NULL){
                    prev=temp;
                    rett=prev;
                }else{
                    prev->next=temp;
                    prev=temp;
                }
            }
            tp=tp->next;
        }
        if(rett==NULL){
            return head;
        }
        ListNode*tr=head;
        while(tr){
            if(tr->val>=x){
                ListNode*temp=new ListNode(tr->val);
                prev->next=temp;
                prev=temp;
            }
            tr=tr->next;
        }
        return rett;

    }
};