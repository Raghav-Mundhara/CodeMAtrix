#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;

    // Adding elements to the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Accessing the front element
    std::cout << "Front element: " << myQueue.front() << std::endl;

    // Removing elements from the queue
    myQueue.pop();

    // Checking if the queue is empty
    if (myQueue.empty()) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        std::cout << "Queue is not empty" << std::endl;
    }

    // Accessing the front element again
    std::cout << "Front element: " << myQueue.front() << std::endl;

    // Accessing the back element
    std::cout << "Back element: " << myQueue.back() << std::endl;

    // Size of the queue
    std::cout << "Size of the queue: " << myQueue.size() << std::endl;

    return 0;
}
