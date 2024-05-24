#include <iostream>

int main() {
    int num = 15;
    
    std::cout << "Multiplos de 3 y 5 entre 15 y 45:\n";
    while (num <= 45) {
        if (num % 3 == 0 && num % 5 == 0) {
            std::cout << num << " ";
        }
        num++;
    }
    std::cout << std::endl;
    return 0;
}
