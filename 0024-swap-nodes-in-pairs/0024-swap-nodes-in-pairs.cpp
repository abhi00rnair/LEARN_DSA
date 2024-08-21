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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode*t1=head;
        ListNode*t2=t1->next;
        ListNode*ret=t2;
        ListNode*temp=nullptr;
        while(t1 && t2){
            ListNode*tp=t2->next;
            t2->next=t1;
            t1->next=tp;

            if(temp){
                temp->next=t2;
            }
            temp=t1;
            t1=t1->next;
            if(t1){
                t2=t1->next;
            }
        }
        return ret;

    }
};