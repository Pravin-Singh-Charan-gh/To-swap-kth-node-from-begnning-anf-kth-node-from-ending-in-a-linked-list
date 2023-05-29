class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*curr=head,*first,*second;
        ListNode*prevFirst=NULL,*prevSecond=NULL;
        while(--k){
        prevFirst=curr;
        curr=curr->next;
        }
        first=curr;
        second=head;
        while(curr->next){
           prevSecond=second;
           second=second->next;
           curr=curr->next;
        }
        if(first==second)
        return head;
        
        if(prevFirst!=NULL)
        prevFirst->next=second;
        else
        head=second;

        if(prevSecond!=NULL)
        prevSecond->next=first;
        else
        head=first;

        ListNode*temp=second->next;
        second->next=first->next;
        first->next=temp;
        return head;
    }
};
