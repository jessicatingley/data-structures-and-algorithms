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

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        auto curr_node1 = list1;
        auto curr_node2 = list2;
        ListNode* new_head = nullptr;

        while (curr_node1 && curr_node2){
            if (curr_node1->val <= curr_node2->val){
                auto next_node = curr_node1->next;
                curr_node1->next = new_head;
                new_head = curr_node1;
                curr_node1 = next_node;

            }
            else{
                auto next_node = curr_node2->next;
                curr_node2->next = new_head;
                new_head = curr_node2;
                curr_node2 = next_node;
            }
        }
        while(curr_node1){
            auto next_node = curr_node1->next;
            curr_node1->next = new_head;
            new_head = curr_node1;
            curr_node1 = next_node;
        }
        while (curr_node2){
            auto next_node = curr_node2->next;
            curr_node2->next = new_head;
            new_head = curr_node2;
            curr_node2 = next_node;
        }
        return reverseList(new_head);
    }
};
