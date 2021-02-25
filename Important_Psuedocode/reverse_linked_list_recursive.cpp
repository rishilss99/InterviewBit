void reverse(ListNode* current, ListNode *&start, ListNode* prev = NULL){
    if(current == NULL){
        start = prev;
        return;
    }
    ListNode *temp = current;
    current = current->next;
    temp->next = prev;
    reverse(current, start, temp);
} 
 
ListNode* Solution::reverseList(ListNode* A) {
    ListNode *head = NULL; 
    reverse(A, head);
    return head;
}