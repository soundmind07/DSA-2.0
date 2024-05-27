problem link:-
  https://leetcode.com/problems/intersection-of-two-linked-lists/description/
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

    int len(ListNode* &head){

        int len=0;

        ListNode* temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
        return len;

    }


    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* A=headA;
        ListNode* B=headB;

        int lenA=len(headA);
        int lenB=len(headB);

        if(lenA>lenB){
            int diff =lenA-lenB;
            while(diff--){
                A=A->next;
            }    
        }

        else {
            int diff =lenB-lenA;
            while(diff--){
                B=B->next;
            }
        }

        while(A!=B){
                A=A->next;
                B=B->next;
            }
            return A;
            
    }
};
