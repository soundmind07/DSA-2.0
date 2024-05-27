problem link:-
  https://leetcode.com/problems/delete-node-in-a-linked-list/description/
Code:-
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
    void deleteNode(ListNode* node) {
        ListNode* ahead = node->next;
        node->val = ahead->val;
        node->next = ahead->next;
        delete (ahead);
    }
};
