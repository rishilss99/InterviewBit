/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    ListNode *head = A;
    int length = 0;
    while(A!=NULL){
        length++;
        A=A->next;
    }
    if(B>length/2)
        return -1;
    int count = 1;
    while(count<length/2 - B + 1){
        // cout<<count<<" "<<head->val<<endl;
        head = head->next;
        count++;
    }
    return head->val;
}
