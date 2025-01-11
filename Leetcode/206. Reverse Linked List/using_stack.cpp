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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)
        {
            return head;
        }
        stack<ListNode*>s;
        ListNode* t=head;
        while(t)
        {
            s.push(t);
            t=t->next;
        }
        ListNode *a=s.top();
        s.pop();
        ListNode *b=s.top();
        a->next=b;
        head=a;
        while(!s.empty())
        {
            a=s.top();
            s.pop();
            if(!s.empty())
            {
                b=s.top();
                a->next=b;
            }
            else
            {
                a->next=NULL;
            }
        }
        return head;
    }
};
