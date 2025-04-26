#include <iostream>
#include <cmath> 
using namespace std;


bool isPrime(int n) {
    if (n < 2) return false; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false; 
    }
    return true;
}

int main() {
    int N;
    
    
    cout << "Nhập số nguyên dương N: ";
    cin >> N;

    if (N <= 2) {
        cout << "Không có số nguyên tố nào nhỏ hơn " << N << endl;
        return 0;
    }

    cout << "Các số nguyên tố nhỏ hơn " << N << " là: ";
    
 
    for (int i = 2; i < N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}
