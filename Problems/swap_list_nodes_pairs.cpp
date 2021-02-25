/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    if(A->next == NULL)
        return A;
    ListNode *head = A->next;
    A->next = head->next;
    head->next = A;
    ListNode *prev = A;
    A = A->next;
    while(A!=NULL && A->next!=NULL){
        ListNode *temp = A->next;
        A->next = temp->next;
        temp->next = A;
        prev->next = temp;
        prev = A;
        A = A->next;
    }
    return head;
}
