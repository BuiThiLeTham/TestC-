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
    
    
    cout << "Nhap so nguyen dương N: ";
    cin >> N;

    if (N <= 2) {
        cout << "Khong co so nguyen to ";
        return 0;
    }

    cout << "Cac so nguyen to nho hon " << N << " là: ";
    
 
    for (int i = 2; i < N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}
