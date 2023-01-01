#include <iostream>
#include "deque.h"
#include <cassert>

int main() {
    Deque q;
    assert(q.size() == 0);
    assert(q.empty());

    q.push_front(1);

    assert(q.size() == 1);
    assert(q.peek_front() == 1);
    assert(q.peek_back() == 1);
    assert(q.empty() == false);

    q.pop_back();

    assert(q.size() == 0);

    q.push_back(1);
    q.push_front(2);

    assert(q.peek_front() == 2);
    assert(q.peek_back() == 1);
    assert(q.empty() == false);
    assert(q.size() == 2);

    q.push_back(3);
    q.push_back(4);
    q.push_front(5);

    assert(q.peek_back() == 4);
    assert(q.peek_front() == 5);
    assert(q.empty() == false);
    assert(q.size() == 5);

    q.pop_back();

    assert(q.size() == 4);
    assert(q.peek_back() == 3);
    assert(q.peek_front() == 5);

    q.pop_front();

    assert(q.size() == 3);
    assert(q.peek_front() == 2);
    assert(q.peek_back() ==3);

    std::cout << "Passed" << std::endl;
    return 0;
}