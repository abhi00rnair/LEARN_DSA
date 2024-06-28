/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
  
    struct ListNode*x=head;
    struct ListNode *y=NULL;
    struct ListNode *z=NULL;
    while(x!=NULL){
        z=x->next;
        x->next=y;
        y=x;
        x=z;
    }
    head=y;

if(head->next==NULL || head==NULL){
    free(head);
    head=NULL;
}else if(n==1){
    struct ListNode*temp=head;
    head=temp->next;
    free(temp);

}else
{ int pos=1;
           struct ListNode*r=head;
           struct ListNode*s=NULL;
           while(r!=NULL && pos!=n){
               s=r;
               r=r->next;
               pos++;
           }
           
           if(r!=NULL && s!=NULL){
               s->next=r->next;
               free(r);
           }
}
          
       

    struct ListNode*a=head;
    struct ListNode*b=NULL;
    struct ListNode*c=NULL;
    while(a!=NULL){
        c=a->next;
        a->next=b;
        b=a;
        a=c;
    }
    head=b;
    return head;
}