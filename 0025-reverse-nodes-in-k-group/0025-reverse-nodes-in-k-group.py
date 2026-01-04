# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
def reverse_func(head):
    curr=head
    prev=None
    nextt=None
    while curr:
        nextt=curr.next
        curr.next=prev
        prev=curr
        curr=nextt
    return prev
class Solution:    

    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        dummy=ListNode(0)
        dummy.next=head
        prev=dummy
        temp=head
        while temp:
            count=0
            tp=temp
            for i in range(0,k):
                if temp is None:
                    break
                else:
                    temp=temp.next
                    count+=1
            if count<k:
                break    
            tr=temp
            tempo=tp
            for i in range(0,k-1):
                tempo=tempo.next
            tempo.next=None
            prev.next=reverse_func(tp)
            tp.next=tr
            prev=tp
        return dummy.next