class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k==0)
            return head;
        ListNode* tmp=new ListNode(0);
        tmp->next=head;
        ListNode* cur=tmp;
        int size=0;
        while(cur->next)
        {
            size+=1;
            cur=cur->next;
        }
        cur->next=head;
        for(int i =0;i<size-k%size;i++)
        {
            cur=cur->next;
        }
        ListNode* new_head=cur->next;
        cur->next=NULL;
        return new_head;       
    }
};