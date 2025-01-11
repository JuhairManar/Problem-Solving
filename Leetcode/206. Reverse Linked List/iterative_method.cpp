class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* current=head;
        //ListNode* af=head->next;
        while(head)
        {
            current=head;
            head=head->next;
            current->next=prev;
            prev=current;
        }
        return prev;
    }
};
