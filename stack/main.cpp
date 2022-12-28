#include <iostream>
#include "stack.h"
#include <cassert>

int main() {
    Stack s;
    assert(s.size() == 0);
    assert(s.empty() == true);

    s.push(1);

    assert(s.size() == 1);
    assert(s.peek() == 1);
    assert(s.empty() == false);

    s.pop();

    assert(s.size() == 0);

    s.push(1);
    s.push(2);

    assert(s.peek() == 2);
    assert(s.empty() == false);

    s.pop();

    assert(s.size() == 1);
    assert(s.peek() == 1);

    std::cout << "Passed" << std::endl;
    return 0;
}
