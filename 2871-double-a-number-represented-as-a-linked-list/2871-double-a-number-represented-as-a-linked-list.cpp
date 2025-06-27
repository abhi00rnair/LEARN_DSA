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
    ListNode* doubleIt(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode*temp=head;
        stack<int>st;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        int carry=0;
        temp=head;
        ListNode*temp1=NULL;
        while(temp){
            int num=(st.top()*2)+carry;
            temp->val=num%10;
            carry =num/10;
            st.pop();
            temp1=temp;
            temp=temp->next;
        }
        if(carry>0){
            ListNode*neww=new ListNode(carry);
            temp1->next=neww;
    }
    ListNode*prev=NULL;
    ListNode*next=NULL;
    ListNode*curr=head;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
    }
};