problem link:-
  https://leetcode.com/problems/palindrome-linked-list/description/
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
    ListNode* find_middle(ListNode* head)
    {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            ListNode* ahead=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ahead;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        
        ListNode* middle=find_middle(head);
        // cout<<middle->val;
        ListNode* new_head=reverse(middle);
        // cout<<new_head;
        while(new_head!=nullptr)
        {
            if(head->val!=new_head->val)
            return false;
            new_head=new_head->next;
            head=head->next;
        }
        return true;
    }
};
