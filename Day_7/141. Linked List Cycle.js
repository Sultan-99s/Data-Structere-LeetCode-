/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
var hasCycle = function(head) {
    if(head === null)
        return false;
    
    let x=head, y=head;
    while(x != null && x.next != null){
        x = x.next.next;
        y = y.next;
        
        if(x===y)
            return true;
    }
    return false;
};
