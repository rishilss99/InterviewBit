ListNode* Solution::reverseList(ListNode* A) {
    ListNode *i = A;
    ListNode *j = A->next;
    A->next = NULL;
    while(j!=NULL){
        ListNode *temp = j;
        j = j->next;
        temp->next = i;
        i = temp;
    }
    return i;
}