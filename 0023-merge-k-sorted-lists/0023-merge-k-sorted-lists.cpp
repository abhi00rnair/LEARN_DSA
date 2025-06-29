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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>>heap;
        int n=lists.size();
        if(n==0){
            return NULL;
        }

        for(int i=0;i<n;i++){
            ListNode*temp=lists[i];
            while(temp){
                heap.push(temp->val);
                temp=temp->next;
            }
        }
        ListNode*rett=NULL;
        ListNode*tr=NULL;

        while(!heap.empty()){
            int tp=heap.top();
            heap.pop();
            ListNode*neww=new ListNode(tp);
            if(rett==NULL){
                rett=neww;
                tr=rett;
            }else{
                tr->next=neww;
                tr=tr->next;
            }

        }
        return rett;
    }
};