var hasCycle = function(head) {
    let fast = head;
    console.log(head)
    while (fast && fast.next) {
      console.log(head, fast, fast.next)
      head = head.next;
      fast = fast.next.next;
      if (head === fast) return true;
    }
    return false;
  };


  function ListNode(val, next) {
    this.val = (val===undefined ? 0 : val)
    this.next = (next===undefined ? null : next)
}

// Not sure the best way to self test but I understand the question
let test3 = new ListNode(4 , 5)
let test2 = new ListNode( 2, test3)
let test = new ListNode(1, test2 )



console.log(hasCycle(test))