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
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        if(head==NULL || head->next==NULL){
            return true;
        }
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode*temp=reverse(slow);
        ListNode*tp=head;
        slow->next=NULL;
        
        while(temp!=nullptr){
            if(tp->val!=temp->val){
                return false;
            }
            tp=tp->next;
            temp=temp->next;
        }
        return true;
    }
    
    ListNode* reverse(ListNode*head){
        ListNode*p=head;
        ListNode*q=NULL;
        ListNode*r=NULL;
        
        while(p!=NULL){
            q=p->next;
            p->next=r;
            r=p;
            p=q;
        }
        return r;
    }
};