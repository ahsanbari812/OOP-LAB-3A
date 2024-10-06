#include <iostream>

void Recursiveswap(int& a, int& b) {
    int temp = a; 
    a = b;         
    b = temp;      
}
int main() {
    int x = 5;
    int y = 10;

    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    
    Recursiveswap(x, y);

    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}
