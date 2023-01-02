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
    ListNode* reverseList(ListNode* head) {
        ListNode* new_head = nullptr;
        ListNode* curr_node = head;

        while (curr_node){
            ListNode* next_node = curr_node->next;
            curr_node->next = new_head;
            new_head = curr_node;
            curr_node = next_node;
        }

        return new_head;

    }
};