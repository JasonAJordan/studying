function ListNode(val, next) {
         this.val = (val===undefined ? 0 : val)
         this.next = (next===undefined ? null : next)
     }
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
//[1,2]
// [1]
// first loop
// else 
// mTL([1,2],[null]) --> on return return [1,1,2] solution! 
// 2nd loop
// return [1,2]


//[1,2]
// [1,3]
// first loop
// else mTL([1,2],[3 , null]) -- > returns [1,1 , 2, 3]
// 2nd loop
// if mTL ([2, null],[3, null]) ->> returns [1, 2, 3]
// 3rd loop
// if mTL (null, [3]) --> [2,3]
// 4th loop 
// returns [3]

var mergeTwoLists = function(list1, list2) {
    if(!list1 || !list2) return list1 || list2
    if(list1.val < list2.val){
        list1.next = mergeTwoLists(list1.next, list2)
        return list1
    }
    else {
        list2.next = mergeTwoLists(list1, list2.next)
        return list2
    }
};


// some slightly fancy way I did in 2020
const mergeTwoLists2 = (l1, l2) => {
    if(!l1 || !l2) return l1 || l2
    if(l1.val < l2.val){
        l1.next = mergeTwoLists2(l1.next, l2)
        return l1
    }
    else {
        l2.next = mergeTwoLists2(l1, l2.next)
        return l2
    }
}

console.log(mergeTwoLists((4, 4)),(2))