function ListNode(val, next) {
      this.val = (val===undefined ? 0 : val)
      this.next = (next===undefined ? null : next)
  }

function reverseLinkedList(node){
  if (!node.next || !node ) return node 

    let temp = reverseLinkedList(node.next);
    node.next.next = node; 
    console.log(node, "@ TEMP", temp)
    node.next = undefined;
    console.log("after undefined", node, "@ TEMP", temp)
    //console.log(temp);
    return temp; 
}

// loop 1 [1,2,3]
// -> runs reverseFn ([2,3])
// -> -> runs reverseFn ([3])
// -> -> -> returns [3]
// -> -> 

let list = new ListNode(1, new ListNode(2, new ListNode(3, undefined)))

console.log(reverseLinkedList(list));


function reverse(head) {
  let node = head,
      previous,
      tmp;

  while (node) {
    // save next before we overwrite node.next!
    tmp = node.next;

    // reverse pointer
    node.next = previous;

    // step forward in the list
    previous = node;
    node = tmp;
  }

  return previous;
}