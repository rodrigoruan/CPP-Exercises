

void reversePrint(SinglyLinkedListNode *llist)
{
  SinglyLinkedListNode *curr = llist;
  vector<int> arr = {};

  while (curr)
  {
    arr.push_back(curr->data);
    curr = curr->next;
  }
  reverse(arr.begin(), arr.end());
  for (int c : arr)
    cout << c << "\n";
}
