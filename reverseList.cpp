ListNode* Solution::reverseList(ListNode* A) {
    if(A==NULL || A->next==NULL) {
        return A;
    }
    
    
    ListNode* newHead = reverseList(A->next);
    A->next->next =  A;
    A->next=NULL;
  //  newHead->next=A;
    
    return newHead;
}
