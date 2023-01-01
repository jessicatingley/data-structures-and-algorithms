#ifndef DATA_STRUCTURES_AND_ALGORITHMS_DEQUE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_DEQUE_H

#include <cstdlib>

class Node{
public:
    Node(int val, Node* next, Node* prev) : val(val), next(next), prev(prev) {}

    Node* next;
    Node* prev;
    int val;
};

class Deque {
private:
    size_t num_elements;
    Node* head;
    Node* tail;
public:
    Deque() : num_elements(0), head(nullptr), tail(nullptr) {}
    void push_front(int val){
        if (empty()){
            tail = head = new Node(val, nullptr, nullptr);
            num_elements++;
            return;
        }
        auto new_node = new Node(val, head, nullptr);
        head->prev = new_node;
        head = new_node;

        num_elements++;
    }

    void push_back(int val) {
        if (empty()){
            tail = head = new Node(val, nullptr, nullptr);
            num_elements++;
            return;
        }
        auto new_node = new Node(val, nullptr, tail);
        tail->next = new_node;
        tail = new_node;

        num_elements++;
    }

    void pop_front() {
        if (size() == 1){
            head = tail = nullptr;
            num_elements--;
            return;
        }
        head = head->next;
        head->prev = nullptr;

        num_elements--;
    }

    void pop_back(){
        if (size() == 1){
            head = tail = nullptr;
            num_elements--;
            return;
        }
        tail = tail->prev;
        tail->next = nullptr;

        num_elements--;
    }
    [[nodiscard]] int peek_front() const {
        return head->val;
    }
    [[nodiscard]] int peek_back() const {
        return tail->val;
    }
    [[nodiscard]] std::size_t size() const {
        return num_elements;
    }
    [[nodiscard]] bool empty() const {
        return num_elements == 0;
    }
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_DEQUE_H
