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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head->next;
        ListNode*ret=slow;
        int count=0;
        while(fast){
            if(fast->val!=0){
            count+=fast->val;
                ListNode*temp=fast;
                slow->next=fast->next;
            fast=fast->next;
                delete(temp);
            }else{
            slow->val=count;
            count=0;
                if(fast->next==NULL){
                    slow->next=NULL;
                }else{
            slow=slow->next;
                }
            fast=fast->next;
            }
        }
        return ret;
    }
};