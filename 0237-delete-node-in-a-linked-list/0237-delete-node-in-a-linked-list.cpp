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
    void deleteNode(ListNode* node) {
        ListNode*temp=node;
        ListNode*tp=nullptr;
        while(temp->next!=nullptr){
            temp->val=temp->next->val;
            tp=temp;
            temp=temp->next;
        }
        tp->next=nullptr;
        delete(temp);
        
    }
};