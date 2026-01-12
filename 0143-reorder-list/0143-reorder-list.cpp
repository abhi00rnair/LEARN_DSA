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
        int count=0;
        if(head==NULL || head->next==NULL){
            return;
        }
        ListNode*temp=head;
        while(temp){
            temp=temp->next;
            count++;
        }
        int mid=(count+1)/2;
        int ct=0;
        temp=head;
        while(temp && ct<mid-1){
            temp=temp->next;
            ct++;
        }
        ListNode*curr=temp->next;
        temp->next=NULL;

        ListNode*nextt=NULL;
        ListNode*prev=NULL;
        while(curr){
            nextt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextt;
        }
        // prev = new hed;
        temp=head;
        while(prev){
            ListNode*tp=temp->next;
            ListNode*tr=prev->next;
            temp->next=prev;
            prev->next=tp;
            temp=tp;
            prev=tr;
        }
    }
};