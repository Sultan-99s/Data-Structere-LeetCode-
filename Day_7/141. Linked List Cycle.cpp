/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        ListNode *x=head, *y=head;

        while(x != NULL  && x->next != NULL){
            x = x->next->next;
            y = y->next;

            if(x==y)
                return true;
        }
        return false;
    }
};
