#include <iostream>
using namespace std;

int main() {
    int n, rem;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    int x = n;

    while (n > 0) {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }

    cout << "After reversing, the number is: " << sum << endl;

    if (sum == x) {
        cout << "The number is a palindrome";
    } else {
        cout << "The number is not a palindrome";
    }

    return 0;
}
