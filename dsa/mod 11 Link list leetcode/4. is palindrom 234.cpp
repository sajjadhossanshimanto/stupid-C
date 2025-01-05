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
    bool backtrack(ListNode* &head, ListNode* tail){
        if (tail->next!=NULL){
            if (!backtrack(head, tail->next)){
                return false;
            }
        }
        
        bool temp = tail->val==head->val;
        head = head->next;
        return temp;
    }
    
    bool isPalindrome(ListNode* head) {
        return backtrack(head, head);
    }
};