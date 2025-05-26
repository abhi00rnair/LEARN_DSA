/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*tp1=headA;
        ListNode*tp2=headB;
        while(tp1!=tp2){
            if(tp1==nullptr){
                tp1=headB;
            }else{
                tp1=tp1->next;
            }
            if(tp2==nullptr){
                tp2=headA;
            }else{
                tp2=tp2->next;
            }
        }
        return tp1;
    }
};