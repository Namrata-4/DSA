#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n <= 1) return n;

    long long prev = 0, curr = 1;
    for (int i = 2; i <= n; i++) {
        long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int n ;
    cout<<"enter a number :";
    cin>>n;
    cout << "Fibonacci of " << n << " is: " << fibonacci(n) << endl;
    return 0;
}