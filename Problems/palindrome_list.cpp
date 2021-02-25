/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    int length = 0;
    ListNode *head = A;
    while(A!=NULL){
        length++;
        A = A->next;
    }
    if(length<2)
        return 1;
    ListNode *i = head;
    ListNode *prev = NULL;
    int count = 0;
    while(count<length/2){
        ListNode *temp = i;
        i = i->next;
        temp->next = prev;
        prev = temp;
        count++;
    }
    if(length%2!=0)
        i = i->next;
    ListNode *j = prev;
    while(i!=NULL && j!=NULL){
        if(i->val != j->val)
            return 0;
        i = i->next;
        j = j->next;
    }
    return 1;
}
