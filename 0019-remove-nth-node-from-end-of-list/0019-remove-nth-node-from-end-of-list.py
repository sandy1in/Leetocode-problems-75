class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ListNode(-1)
        dummy.next = head
        fast = head
        slow = dummy
        
        for i in range(n):
            fast = fast.next
        
        while fast:
            fast = fast.next
            slow = slow.next
        
        tmp = slow.next.next
        slow.next.next = None
        slow.next = tmp
        
        return dummy.next
