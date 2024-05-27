problem link:-
  https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
Code:-
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == nullptr)
            return nullptr;
        ListNode* fast = head;
        int i = 1;
        while (i <= n) {
            fast = fast->next;
            i++;
        }
        if (fast == nullptr)
            return head->next;
        ListNode* slow = head;
        ListNode* prev = nullptr;
        while (fast != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        prev->next = slow->next;
        delete (slow);
        return head;
    }
};
