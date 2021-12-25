

DoublyLinkedListNode *sortedInsert(DoublyLinkedListNode *llist, int data)
{
  DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data);
  if (llist == NULL)
    return newNode;
  if (llist->data > data)
  {
    newNode->next = llist;
    llist->prev = newNode;
    return newNode;
  }

  DoublyLinkedListNode *curr = llist;

  while (curr->next && curr->next->data < data)
  {
    curr = curr->next;
  }

  if (curr->next == NULL)
  {
    curr->next = newNode;
    return llist;
  }

  DoublyLinkedListNode *nx = curr->next;
  curr->next = newNode;
  newNode->prev = curr;
  newNode->next = nx;
  nx->prev = newNode;

  return llist;
}
