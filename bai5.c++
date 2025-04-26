#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    do {
        cout << "Nhap n (1 <= n <= 30): ";
        cin >> n;
        if (n <= 0 || n > 30) {
            cout << "Gia tri n khong hop le. Vui long nhap lai!\n";
        }
    } while (n <= 0 || n > 30);

    cout << "Day Fibonacci tu F(1) den F(" << n << "):\n";
    for (int i = 1; i <= n; i++) {
        cout << "F(" << i << ") = " << fibonacci(i) << endl;
    }
    return 0;
}
