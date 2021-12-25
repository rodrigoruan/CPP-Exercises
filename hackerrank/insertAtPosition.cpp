

SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *llist, int data, int position)
{
  SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);

  SinglyLinkedListNode *curr = llist;

  int i = 0;

  while (i + 1 < position)
  {
    curr = curr->next;
    i++;
  }

  newNode->next = curr->next;
  curr->next = newNode;

  return llist;
}
