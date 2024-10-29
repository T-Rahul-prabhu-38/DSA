#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top element: " << s.top() << std::endl; // Output: 30

    s.pop(); // Remove 30

    std::cout << "Top element after pop: " << s.top() << std::endl; // Output: 20

    std::cout << "Stack size: " << s.size() << std::endl; // Output: 2

    if (s.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl; // Output: Stack is not empty
    }

    return 0;
}
