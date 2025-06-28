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
    ListNode* sortList(ListNode* head) {
        vector<int>temp;
        ListNode*tp=head;
        while(tp){
            temp.push_back(tp->val);
            tp=tp->next;
        }
        sort(temp.begin(), temp.end());
        tp=head;
        int i=0;
        while(tp){
            tp->val=temp[i];
            i++;
            tp=tp->next;
        }
        return head;
    }
};