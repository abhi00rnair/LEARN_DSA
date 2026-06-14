# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        count=0
        temp=head
        while temp:
            temp=temp.next
            count+=1
        mid=count/2
        tp,ct=head,0
        while ct!=mid:
            tp=tp.next
            ct+=1
        # reverse the next half
        prev=None
        nextt=None
        while tp:
            nextt=tp.next
            tp.next=prev
            prev=tp
            tp=nextt
        head1=prev

        # two pointer traversal
        ctt=0
        rett=0
        while ctt!=mid:
            tp_Sum=head.val+head1.val
            rett=max(rett,tp_Sum)
            head=head.next
            head1=head1.next
            ctt+=1
        return rett
