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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* cur1 = headA;
        
        while (cur1!=NULL){
            
            ListNode* cur2 = headB;
            while (cur2!=NULL){
                if (cur1==cur2) return cur1;
                cur2 = cur2->next;
            }
            cur1 = cur1->next;
        }
        return NULL;
    }
};