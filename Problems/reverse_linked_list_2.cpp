ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    ListNode *head = new ListNode(0);
    head->next = A;
    ListNode *start = head;
    int count = 1;
    while(count<B){
        count++;
        head = head->next;
        A = A->next;
    }
    ListNode* prev = NULL;
    while(count<=C){
        ListNode *temp = A->next;
        A->next = prev;
        prev = A;
        A = temp;
        count++;
    }
}