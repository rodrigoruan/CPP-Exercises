

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
   SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
   
   if(llist == nullptr) return newNode;

    newNode -> next = llist;
    return newNode;
}

