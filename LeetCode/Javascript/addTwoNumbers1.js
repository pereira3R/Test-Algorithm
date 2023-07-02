/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
 
function ListNode(val) {
    this.val = val;
    this.next = null;
}

var addTwoNumbers = function(l1, l2) {
    let sum = 0; 
    let auxL1 = l1;
    let auxL2 = l2;
    let l3 = null;
    let carry = 0;
    
    while (auxL1 !== null || auxL2 !== null) {
        let val1 = auxL1 !== null ? auxL1.val : 0;
        let val2 = auxL2 !== null ? auxL2.val : 0;
        
        sum = val1 + val2 + carry;
        carry = Math.floor(sum / 10);
        sum = sum % 10;

        let newNode = new ListNode(sum);
        
        if (l3 === null) {
            l3 = newNode;
        } else {
            let auxRun = l3;
            while (auxRun.next !== null) {
                auxRun = auxRun.next; 
            }
            auxRun.next = newNode;  
        }
        
        if (auxL1 !== null) {
            auxL1 = auxL1.next;
        }
        if (auxL2 !== null) {
            auxL2 = auxL2.next;
        }
    }
    
    if (carry > 0) {
        let newNode = new ListNode(carry);
        let auxRun = l3;
        while (auxRun.next !== null) {
            auxRun = auxRun.next;
        }
        auxRun.next = newNode;
    }
    
    return l3; 
};