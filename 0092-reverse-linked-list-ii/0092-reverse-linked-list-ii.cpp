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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
            if (left == right) {
            return head;
        }
        ListNode temp(0);
        temp.next = head;
        ListNode* a = &temp;

        for (int i = 1; i < left; ++i) {
            a = a->next;
        }

        ListNode* b = a->next;
        ListNode* c = b;
        for (int i = left; i < right; ++i) {
            c = c->next;
        }
        ListNode* d = c->next;
        a->next = nullptr;
        c->next = nullptr;
        ListNode* reversed = reverse(b);
        a->next = reversed;
        b->next = d;

        return temp.next;
    }
        
    
    ListNode* reverse(ListNode *head){
        ListNode*current=head;
        ListNode* prev=NULL;
        ListNode* nextt=NULL;
        
        while(current!=nullptr){
            nextt=current->next;
            current->next=prev;
            prev=current;
            current=nextt;
            
        }
        head=prev;
        return head;
        
    }
    
    
};