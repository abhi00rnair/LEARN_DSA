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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode *temp=head;
        ListNode*prev=NULL;

        unordered_set<int>numset(nums.begin(), nums.end());
        while(temp){
            if(numset.find(temp->val)!=numset.end()){
                //numset.erase(temp->val);
                if(prev==NULL){
                    ListNode*ts=temp;
                    head=temp->next;
                    delete temp;
                    temp=head;
                }else{
                    prev->next=temp->next;
                    delete temp;
                    temp=prev->next;
                }
            }else{
                prev=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};