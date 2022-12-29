#include <iostream>
#include "queue.h"
#include <cassert>

int main() {
    Queue q;
    assert(q.size() == 0);
    assert(q.empty());

    q.push(1);

    assert(q.size() == 1);
    assert(q.peek() == 1);
    assert(q.empty() == false);

    q.pop();

    assert(q.size() == 0);

    q.push(1);
    q.push(2);

    assert(q.peek() == 1);
    assert(q.empty() == false);
    assert(q.size() == 2);

    q.push(3);
    q.push(4);
    q.push(5);

    assert(q.peek() == 1);
    assert(q.empty() == false);
    assert(q.size() == 5);

    q.pop();

    assert(q.size() == 4);
    assert(q.peek() == 2);

    std::cout << "Passed" << std::endl;
    return 0;
}