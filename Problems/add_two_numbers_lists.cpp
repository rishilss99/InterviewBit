/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode *head = new ListNode(0);
    ListNode *start = head;
    bool carry = false;
    while(A!=NULL || B!=NULL){
        if(B==NULL){
            head->next = A;
            head = head->next;
            head->val += carry;
            if(head->val>9){
                head->val%=10;
                carry = true;
            }
            else
                carry = false;
            A = A->next;
        }
        else if(A==NULL){
            head->next = B;
            head = head->next;
            head->val += carry;
            if(head->val>9){
                head->val%=10;
                carry = true;
            }
            else
                carry = false;
            B = B->next;
        }
        else{
            head->next = A;
            head = head->next;
            head->val += B->val + carry;
            if(head->val>9){
                head->val%=10;
                carry = true;
            }
            else
                carry = false;
            A = A->next;
            B = B->next;
        }
    }
    if(carry)
        head->next = new ListNode(1);
    return start->next;
}
