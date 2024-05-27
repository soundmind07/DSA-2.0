problem link:-
  https://leetcode.com/problems/rotate-list/description/
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)
        return nullptr;
        if(head->next==nullptr)
        return head;
        if(k==0)
        return head;
        int length=0;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            length++;
            curr=curr->next;
        }

        k=k%length;
        if(k==0)
        return head;
        ListNode* temp=head;
        int i=1;
        ListNode* prev;
        while(i<length-k+1)
        {
            prev=temp;
            temp=temp->next;
            i++;
        }
        prev->next=nullptr;
        ListNode* new_head=temp;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=head;
        return new_head;
    }
};
