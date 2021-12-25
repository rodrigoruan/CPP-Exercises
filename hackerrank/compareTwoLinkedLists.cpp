

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* curr1 = head1;
    SinglyLinkedListNode* curr2 = head2;
    
    string s1 = "";
    string s2 = "";
    
    while(curr1) {
        s1 += curr1 -> data;
        curr1 = curr1 ->next;
    }
    
    while(curr2) {
        s2 += curr2 -> data;
        curr2 = curr2 ->next;
    }
    
    return s1 == s2;
}

