/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode *first_head = new ListNode(0);
    ListNode *C = first_head;
    ListNode *second_head = A;
    while(A!=NULL){
        if(A->val<B){
            C->next = A;
            A = A->next;
            C = C->next;
            second_head = A;
        }
        else if(A->next!=NULL && A->next->val<B){
            C->next = A->next;
            A->next = A->next->next;
            C = C->next;
        }
        else
            A = A->next;
    }
    C->next = second_head;
    return first_head->next;
    
}
