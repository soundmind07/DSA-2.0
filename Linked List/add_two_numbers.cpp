problem link:-
  https://leetcode.com/problems/add-two-numbers/description/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* new_head=new ListNode(-1);
        ListNode* curr=new_head;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int carry=0;
        while(temp1 and temp2)
        {
            int val=temp1->val+temp2->val+carry;
            val=val%10;
            carry=val/10;
            ListNode* temp=new ListNode(val);
            curr->next=temp;
            curr=temp;
            temp1=temp1->next;
            temp2=temp2->next;

        }
        while(temp1)
        {
            int val=temp1->val+carry;
            val=val%10;
            carry=val/10;
            ListNode* temp=new ListNode(val);
            curr->next=temp;
            curr=temp;
            temp1=temp1->next;
        }
        
        while(temp2)
        {
            int val=temp2->val+carry;
            val=val%10;
            carry=val/10;
            ListNode* temp=new ListNode(val);
            curr->next=temp;
            curr=temp;
            temp2=temp2->next;
        }
        if(carry)
        {
            ListNode* temp=new ListNode(1);
            curr->next=temp;
            curr=temp;
        }
        return new_head->next;
    }
};
