#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int max = INT_MIN; // Initialize max to the smallest possible integer value

    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> num;

        if (num > max) {
            max = num;
        }
    }

    std::cout << "The greatest number is: " << max << std::endl;

    return 0;
}
