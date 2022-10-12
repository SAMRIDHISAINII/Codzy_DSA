# python solution

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        v1 = l1.val;    c1 = 1
        v2 = l2.val;    c2 = 1
        while(l1.next != None):
            v1 = v1 + l1.next.val * (10 ** c1)
            l1 = l1.next
            c1 += 1
        while(l2.next != None):
            v2 = v2 + l2.next.val * (10 ** c2)
            l2 = l2.next
            c2 += 1
        s = v1 + v2

        s = str(s)
        res = None
        for i in s:
            node = ListNode(i[::-1])
            node.next = res
            res = node

        return res  
