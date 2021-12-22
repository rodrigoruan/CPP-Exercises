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
    int getDecimalValue(ListNode* head) {
        vector<int> arr = {};
        ListNode* curr = head;
        
        while(curr -> next != nullptr) {
            arr.push_back(curr -> val);
            curr = curr -> next;
        }
        
        arr.push_back(curr -> val);
        
        string res = "";
        for(int c : arr) res += to_string(c);
        
        return stoi(res, nullptr, 2);
    }
};