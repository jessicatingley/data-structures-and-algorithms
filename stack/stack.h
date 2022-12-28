#ifndef DATA_STRUCTURES_STACK_H
#define DATA_STRUCTURES_STACK_H

#include <cstdint>
class Node{
public:
    Node(int p_val, Node* p_next){
        val = p_val;
        next = p_next;
    }
    int val;
    Node* next;
};

class Stack {
private:
    size_t num_elements;
    Node* head;
public:
    Stack() {
        num_elements = 0;
        head = nullptr;
    }
    void push(int val) {
        Node* o = new Node(val, head);
        head = o;

        num_elements += 1;
    }
    void pop() {
        Node node_one = *head;
        head = node_one.next;

        num_elements -= 1;
    }
    [[nodiscard]] int peek() const {
        Node node_one = *head;
        return node_one.val;
    }
    [[nodiscard]] size_t size() const {
        return num_elements;
    }
    [[nodiscard]] bool empty() const {
        if (size() == 0){
            return true;
        }
        else{
            return false;
        }
    }
};

#endif //DATA_STRUCTURES_STACK_H
