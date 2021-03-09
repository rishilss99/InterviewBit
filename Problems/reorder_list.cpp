ListNode* Solution::reorderList(ListNode* A) {
    int length = 0;
    ListNode *first_head = A;
    while(A!=NULL){
        length++;
        A = A->next;
    }
    if(length<3)
        return first_head;
    A = first_head;
    int count = 1;
    while(count<=(length+1)/2){
        count++;
        A = A->next;
    }
    ListNode *prev = NULL;
    while(A!=NULL){
        ListNode *temp = A->next;
        A->next = prev;
        prev = A;
        A = temp;
    }
    ListNode *second_head = prev;
    ListNode *start = new ListNode(0);
    ListNode *head = start;
    count = 1;
    while(count<=(length+1)/2){
        head->next = first_head;
        head = head->next;
        first_head = first_head->next;
        if(second_head!=NULL){
            head->next = second_head;
            head = head->next;
            second_head = second_head->next;
        }
        count++;
    }
    head->next = NULL;
    return start->next;
}