#include <iostream>

int main() {
    int x;
    std::cin >> x;

    int days = 0;
    
    while ((1 << days) < x) {
        days++;
    }

    std::cout << days << std::endl;

    return 0;
}
