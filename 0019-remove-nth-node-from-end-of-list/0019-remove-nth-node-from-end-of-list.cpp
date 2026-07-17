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
        ListNode* curr=head;
        ListNode* prev=new ListNode();
        prev->next=curr;
        int l=1;
        while(curr->next!=NULL){
            curr=curr->next;
            l++;
        }
        if(l==n){
            return head->next;
        }
        cout<<curr->val;
        for(int i=1;i<=l-n;i++){
            prev=prev->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};