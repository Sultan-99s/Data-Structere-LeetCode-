/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *pre = NULL;
        ListNode *cur = head;

        while(cur != NULL){
            if(cur->val == val){
                if(pre == NULL)
                    head = cur->next;
                else
                    pre->next = cur->next;
                
                ListNode *temp = cur;
                cur = cur->next;
                delete temp;
            }
            else{
                pre = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
