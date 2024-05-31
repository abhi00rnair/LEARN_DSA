struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode* resultHead = NULL;
    struct ListNode* resultTail = NULL;
    int carry = 0;
    
    while (l1 != NULL || l2 != NULL) {
        int sum = carry;
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;
        sum %= 10;
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = sum;
        newNode->next = NULL;
        
       
        if (resultHead == NULL) {
            resultHead = resultTail = newNode;
        } else {
            resultTail->next = newNode;
            resultTail = newNode;
        }
    }
    if (carry > 0) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = carry;
        newNode->next = NULL;
        
      
        resultTail->next = newNode;
        resultTail = newNode;
    }
    
    return resultHead;
}