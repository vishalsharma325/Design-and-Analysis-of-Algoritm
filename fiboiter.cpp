#include <iostream>
#include <chrono>
using namespace std;
int fibonacci(int n) {
    if (n == 1 || n == 0)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Fibonacci Series is : ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    std::cout << "Elapsed time: " << elapsed.count() << " seconds" << std::endl;
    return 0;
}
