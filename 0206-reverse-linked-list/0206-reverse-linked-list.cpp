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
    ListNode* reverseList(ListNode* head) {
        ListNode*curr=head;
        ListNode*tp1=nullptr;
        ListNode*tp2=nullptr;

        while(curr){
            tp1=curr->next;
            curr->next=tp2;
            tp2=curr;
            curr=tp1;
        }
        return tp2;
    }
};