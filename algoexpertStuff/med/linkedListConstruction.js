// This is an input class. Do not edit.
class Node {
    constructor(value) {
      this.value = value;
      this.prev = null;
      this.next = null;
    }
  }
  
  // Feel free to add new properties and methods to the class.
  class DoublyLinkedList {
    constructor() {
      this.head = null;
      this.tail = null;
    }
  
    setHead(node) {
      // Write your code here.
          //let temp = this
          if (this.head === null){
              node.head = node 
              node.tail = node
              return;
          }
          this.insertBefore(this.head, node)
  
    }
  
    setTail(node) {
      // Write your code here.
    }
  
    insertBefore(node, nodeToInsert) {
      // Write your code here.
          if (nodeToInsert === this.head && nodeToInsert === this.tail) return;
          this.remove(nodeToInsert);
          nodeToInsert.prev = node.prev
          nodeToInsert.next = node; 
          if (node.prev === null){
              this.head = nodeToInsert;
          } else {
              node.prev.next = nodeToInsert
          }
          node.prev = nodeToInsert; 
    }
  
    insertAfter(node, nodeToInsert) {
      // Write your code here.
    }
  
    insertAtPosition(position, nodeToInsert) {
      // Write your code here.
    }
  
    removeNodesWithValue(value) {
      // Write your code here.
    }
  
    remove(node) {
      // Write your code here.
          if (node === this.head) this.head = this.head.next; 
          if (node === this.tail) this.tail = this.tail.prev;
          this.removeNodeBindings(node);
    }
  
    containsNodeWithValue(value) {
      // Write your code here.
    }
      
      removeNodeBindings(node){
          if (node.prev !== null) node.prev.next = node.next;
          if (node.next!== null) node.prev.next = node.prev;
          node.prev = null;
          node.next = null; 
      }
  }
  
