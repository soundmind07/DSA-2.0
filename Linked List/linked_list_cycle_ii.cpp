problem link:-
  https://leetcode.com/problems/linked-list-cycle-ii/description/
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
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr)
        return nullptr;
        if(head->next==nullptr)
        return nullptr;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr)
        {
            slow=slow->next;
            fast=fast->next;
            if(fast!=nullptr)
            {
                fast=fast->next;
            }
            if(slow==fast)
            {
                slow=head;
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};
