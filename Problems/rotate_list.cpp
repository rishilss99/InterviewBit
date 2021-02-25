/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode *head = A;
    int length = 1;
    while(A->next!=NULL){
        length++;
        A = A->next;
    }
    A->next = head;
    int count = 1;
    A = A->next;
    while(count<length-(B%length)){
        count++;
        A = A->next;
    }
    head = A->next;
    A->next = NULL;
    return head;
    
}