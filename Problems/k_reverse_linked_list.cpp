/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode *head = new ListNode(0);
    ListNode *start = head;
    while(A!=NULL){
        ListNode *first = A;
        ListNode *prev = NULL;
        int count = 0;
        while(count<B){
            ListNode *temp = A->next;
            A->next = prev;
            prev = A;
            A = temp;
            count++;
        }
        // cout<<"Hey"<<endl;
        first->next = A;
        head->next = prev;
        head = first;
        // cout<<first->val<<" "<<prev->val<<" "<<A->val<<endl;
    }
    return start->next;
}
