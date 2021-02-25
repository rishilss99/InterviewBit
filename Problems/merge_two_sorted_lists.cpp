/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *i = A->val<B->val?A:B;
    ListNode *j = A->val<B->val?B:A;
    ListNode *head = i;
    while(j!=NULL){
        if(i->next==NULL || i->next->val > j->val){
            ListNode *temp = j;
            j = j->next;
            temp->next = i->next;
            i->next = temp;
        }
        i = i->next;
    }
    return head;
}
