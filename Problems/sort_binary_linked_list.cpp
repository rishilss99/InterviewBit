/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode *head = A;
    ListNode *j = A->next;
    ListNode *i = A;
    while(j!=NULL){
        if(i->val==0)
            i=i->next;
        else{
            if(j->val==0){
                i->val = 0;
                j->val = 1;
                i=i->next;
            }
        }
        j=j->next;
    }
    return head;
}
