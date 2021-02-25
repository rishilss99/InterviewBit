/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode *head = A;
    A = A->next;
    head->next = NULL;
    while(A!=NULL){
        ListNode *B = head;
        while(B->next!=NULL && A->val>B->next->val){
            B = B->next;
        }
        if(B==head && A->val<B->val){
            head = A;
            A = A->next;
            head->next = B;
        }
        else{
            ListNode *temp = A;
            A = A->next;
            temp->next = B->next;
            B->next = temp;
        }
    }
    return head;
}
