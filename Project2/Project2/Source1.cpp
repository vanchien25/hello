//Write a program to check whether number N is a prime number or not (1 < N < 10000)? 
#include <iostream>
bool is_prime(int N) {
    if (N <= 1)
        return false;
    for (int i = 2; i * i <= N; ++i) {
        if (N % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    std::cout << "Enter a number (1 < N < 10000): ";
    std::cin >> N;

    if (1 < N && N < 10000) {
        if (is_prime(N))
            std::cout << N << " is a prime number." << std::endl;
        else
            std::cout << N << " is not a prime number." << std::endl;
    }
    else {
        std::cout << "Number out of range!" << std::endl;
    }

    return 0;
}
