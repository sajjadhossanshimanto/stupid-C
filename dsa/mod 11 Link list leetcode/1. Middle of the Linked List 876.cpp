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
    int size(ListNode* head){
        ListNode* node = head;
        int cnt = 0;
        while (node!=NULL){
            cnt++;
            node = node->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int sz = this->size(head)/2;
        ListNode* node = head;
        while(sz--){
            node = node->next;
        }
        return node;
    }
};