#include <iostream>

void foo(int n) {

    std::cout << n << std::endl;

    if (n == 1)
        return;
    else if (n % 2 == 0)
        n = n/2;
    else
        n = 3*n + 1;
    
    foo(n);
}

int main() {
    int examples[] = {3, 6, 9, 13, 17, 24};

    for (int i: examples) {
        std::cout << "#" << i << " example" << std::endl;
        foo(i);
        
    }

}

