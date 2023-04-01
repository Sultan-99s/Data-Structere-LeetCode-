
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        pre = None
        temp = head

        while temp:
            next = temp.next
            temp.next = pre
            pre = temp
            temp = next
        return pre
