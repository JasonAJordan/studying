// public class Node {
// 	private Integer num;
// 	public Node next;

// 	public Node(int num) {
// 		this.num = num
// 	}
// }

// // building the linked list
// Node root = new Node(2)
// Node node1 = new Node(5)
// root.next = node1
// Node node2 = new Node(1)
// node1.next = node2
// .... 2-5-1-4-6-2-11-44-1
// invert the elements of the linked list 2 by 2
// 2-5-1-4-6-2-11-44-1 becomes 5-2-4-1-2-6-44-11-1

class Node {
    constructor(value){
        this.value = value
        this.next = null;
    }
}

// Input should be something like this

const list = {
    head: {
        value: 2,
        next: {
            value: 5,                                            
            next: {
                value: 1,
                next: {
                    value: 4,
                    next: null	
                    }
                }
            }
        }
}


function invertLinkedListByTwo(list){

    let nodes = list.head;
    let node = nodes;
    let loops = 1;

    while (node) {
        let tempValue = node.value
        //console.log(JSON.stringify(node))
        //console.log(node.next)

        node.value = node.next.value;
        node.next.value = tempValue; 
        console.log(JSON.stringify(node) + " " + loops)

        //if (node.next.next === null) !nodes
        node = node.next.next
        loops++;
    }

    return nodes;
}

console.log(JSON.stringify(invertLinkedListByTwo(list)) + "asdfasdf")