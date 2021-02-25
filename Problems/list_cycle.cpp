/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *first = A;
    ListNode *second = A;
    do{
        if(second==NULL || second->next==NULL)
            return NULL;
        first = first->next;
        second = second->next->next;
    }
    while(first!=second);
    // cout<<"Hey"<<endl;
    // cout<<first<<" "<<second<<endl;
    int length = 1;
    second = second->next;
    while(second!=first){
        // cout<<first->val<<" "<<second->val<<endl;
        second = second->next;
        length++;
    }
    cout<<length<<endl;
    ListNode *start = A;
    ListNode *kstart = A;
    while(length){
        kstart=kstart->next;
        length--;
    }
    while(kstart!=start){
        start=start->next;
        kstart=kstart->next;
    }
    return start;
}
