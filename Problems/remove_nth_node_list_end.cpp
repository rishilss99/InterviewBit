/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    if(A==NULL)
        return A;
    int length = 0;
    ListNode *head = A;
    ListNode *i = A;
    while(A!=NULL){
        length++;
        A = A->next;
    }
    if(length <= B)
        head = head->next;
    else{
        int count = 1;
        while(count<length-B){
            i = i->next;
            count++;
        }
        i->next = i->next->next;
    }
    return head;
    
}
