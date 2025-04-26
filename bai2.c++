#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n;

   
    while (true) {
        cout << "Nhap so phan tu n (>0): ";
        cin >> n;

        if (cin.fail() || n <= 0) {
            cout << "Gia tri khong hop le. Vui long nhap lai.\n";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        } else {
            break;
        }
    }

    int arr[n];
    cout << "Nhap " << n << " so nguyen:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }


    int maxDiv3 = -1e9;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            if (!found || arr[i] > maxDiv3) {
                maxDiv3 = arr[i];
                found = true;
            }
        }
    }


    if (found) {
        cout << "So lon nhat chia het cho 3 la: " << maxDiv3 << endl;
    } else {
        cout << "Khong co\n";
    }


    return 0;
}
