var deleteDuplicates = function(head) {
    current = head
    while (current && current.next ){
        if (current.val == current.next.val )
            current.next = current.next.next
        else 
            current = current.next
    }
    return head
    
};

// sighty faster answer 
var deleteDuplicates = function(head) {
    if (head == null) return head;
    let cur = head
    while (cur && cur.next){
      if (cur.val == cur.next.val )
          cur.next = cur.next.next
      else 
          cur = cur.next
    }
    return head
};