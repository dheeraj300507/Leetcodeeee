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
     ListNode* temp=head;
     if(head==NULL || head->next==NULL || k==0)
        return head;
     int c=0;
     while(temp!=NULL){
        c++;
        temp=temp->next;
     } 
     k%=c;
     if(k==0)
        return head;
    temp=head;
     for(int i=1;i<c-k;i++){
        temp=temp->next;
     }  
     ListNode *ex=temp->next;
     temp->next=NULL;
     ListNode *temp2=ex;
     while(temp2->next!=NULL){
        temp2=temp2->next;
     }
     temp2->next=head;
     return ex;
    }
};