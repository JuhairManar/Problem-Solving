class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
        {
            return 0;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
        
        
    }
};
