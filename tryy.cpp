
#include <iostream>
#include <vector>

int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Starting program...\n";
    int x = 5;
    int y = 7;
    int z = add(x, y); // Set a breakpoint here
    std::cout << "Result: " << z << "\n";
    std::cout << "Done.\n";
    return 0;
}
