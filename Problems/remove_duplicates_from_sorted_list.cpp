/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A->next==NULL)
        return A;
    ListNode *i = A;
    ListNode *j = A->next;
    int curr = A->val;
    while(j!=NULL){
        if(j->val!=curr){
            i->next = j;
            i = i->next;
            curr = j->val;
        }
        j = j->next;
    }
    i->next = NULL;
    return A;
}
