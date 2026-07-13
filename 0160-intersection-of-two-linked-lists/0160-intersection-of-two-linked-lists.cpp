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
        ListNode *temp=headB;
        ListNode *temp2=headA;
        while(temp!=NULL){
            while(temp2!=NULL){
                if(temp==temp2){
                    return temp;
                }
                temp2=temp2->next;
            }
            temp2=headA;
            temp=temp->next;
        }
        return NULL;
    }
};