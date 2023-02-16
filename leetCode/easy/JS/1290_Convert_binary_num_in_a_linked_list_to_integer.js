// "frist try" actually forgot about parseInt(bit, 2); 

var getDecimalValue = function(head) {
  let numArray = [];
  while (head){
    numArray.push(head.val);
    head = head.next;
  }
  return parseInt(numArray.join(""), 2)
};