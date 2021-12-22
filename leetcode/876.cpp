/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* curr = head;
        while(curr -> next != nullptr) {
            size++;
            curr = curr -> next;
        }
        size++;
        int middle = size % 2 == 0? round(size/2.0) + 1 : round(size/2.0);
        ListNode* res = head;
        int ac = 1;
        while(ac < middle) {
            res = res -> next;
            ac += 1;
        }
        return res;
    }
};