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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l=list1;
        ListNode* r=list2;
        ListNode* dummy=new ListNode();
        ListNode* dummyhead=dummy;

        while(l!=NULL && r!=NULL){
            if(l->val<=r->val){
                dummy->next=l;
                dummy=dummy->next;
                l=l->next;
            }
            else{
                dummy->next=r;
                dummy=dummy->next;
                r=r->next;
            }
        }
        if(l!=NULL){
            dummy->next=l;
        }
        else{
            dummy->next=r;
        }
        return dummyhead->next;
    }
};