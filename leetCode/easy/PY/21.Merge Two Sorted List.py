def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
  cur = dummy = ListNode()
  while list1 and list2:               
    if list1.val < list2.val:
      cur.next = list1
      list1, cur = list1.next, list1
    else:
      cur.next = list2
      list2, cur = list2.next, list2
          
  if list1 or list2:
    # TiL about this type of ternary / if statment for python
    cur.next = list1 if list1 else list2
      
  return dummy.next
