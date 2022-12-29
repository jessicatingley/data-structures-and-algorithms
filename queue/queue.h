#ifndef DATA_STRUCTURES_AND_ALGORITHMS_QUEUE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_QUEUE_H

#include <cstdlib>

class Node{
public:
    Node(int p_val, Node* p_next){
        val = p_val;
        next = p_next;
    }
    int val;
    Node* next;
};

class Queue {
private:
    size_t num_elements;
    Node* head;
    Node* tail;
public:
    Queue() : num_elements(0), head(nullptr), tail(nullptr) {}
    void push(int val) {
        if (empty()){
            tail = head = new Node(val, nullptr);
        }
        else{
            auto new_node = new Node(val, nullptr);
            tail->next = new_node;
            tail = new_node;
        }

        num_elements++;
    }
    void pop() {
        if (size() == 1){
            head = tail = nullptr;
        }
        else{
            head = head->next;
        }
        num_elements--;
    }
    [[nodiscard]] int peek() const {
        return head->val;
    }
    [[nodiscard]] std::size_t size() const {
        return num_elements;
    }
    [[nodiscard]] bool empty() const {
        return num_elements == 0;
    }
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_QUEUE_H
