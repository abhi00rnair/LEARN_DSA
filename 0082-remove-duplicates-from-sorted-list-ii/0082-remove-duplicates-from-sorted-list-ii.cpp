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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*dummy=new ListNode(0, head);
        ListNode*prev=dummy;
        ListNode*curr=head;
        while(curr){
            int flag=0;
            while(curr->next && curr->val==curr->next->val){
                flag=1;
                ListNode*tp=curr;
                curr=curr->next;
                delete tp;
            }
            if(flag==1){
                ListNode*tp=curr;
                curr=curr->next;
                prev->next=curr;
                delete tp;
            }else{
                prev=curr;
                curr=curr->next;
            }
        }
        head=dummy->next;
        return head;

    }
};