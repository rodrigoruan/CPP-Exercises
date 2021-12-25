

SinglyLinkedListNode *deleteNode(SinglyLinkedListNode *llist, int position)
{
  if (position == 0 && llist->next)
  {
    SinglyLinkedListNode *h = llist->next;
    return h;
  }

  if (position == 0)
  {
    return nullptr;
  }

  SinglyLinkedListNode *curr = llist;
  int i = 0;

  while (i + 1 < position)
  {
    i += 1;
    curr = curr->next;
  }

  curr->next = curr->next->next;

  return llist;
}
