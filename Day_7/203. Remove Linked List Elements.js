/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} val
 * @return {ListNode}
 */
var removeElements = function(head, val) {
    let dummy = new ListNode(-1);
    dummy.next = head;

    let pre = dummy;
    let cur = head;

    while(cur){
        if(cur.val === val)
            pre.next = cur.next;
        else
            pre = cur;
        
        cur = cur.next;
    }
    return dummy.next;
};
