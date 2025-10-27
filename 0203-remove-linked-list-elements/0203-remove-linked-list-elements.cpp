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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*prev=NULL;
        ListNode*temp=head;

        while(temp && temp->val==val){
            temp=temp->next;
        }
        prev=temp;
        head=prev;
        while(temp){
            if(temp->val==val){
                ListNode*tp=temp;
                prev->next=temp->next;
                temp=temp->next;
                delete(tp);
            }else{
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};