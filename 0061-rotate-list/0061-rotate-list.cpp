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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0 ||!head->next){
            return head;
        }
        int count=1;
        ListNode*tp=head;
        while(tp->next){
            count++;
            tp=tp->next;
        }
        tp->next=head;
        k=k%count;
        int tt=count-k;
        tp=head;
        while(tt!=1){
            tp=tp->next;
            tt--;
        }
        ListNode*ret=tp->next;
        tp->next=NULL;
        return ret;
    }
};