#include <iostream>

int main() {
    int x = 7;
    int y = 14;

    std::cout << "start:" << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    x = x + y;
    y = x - y;
    x = x - y;

    std::cout << "finish:" << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}
