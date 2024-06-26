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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode*i=head;
        ListNode*j=head->next;
        ListNode*k=j;
        while(j!=nullptr && j->next!=nullptr){
            i->next=j->next;
            j->next=j->next->next;
            i=i->next;
            j=j->next;
        }
        //j->next=nullptr;
        i->next=k;
        return head;
    }
};