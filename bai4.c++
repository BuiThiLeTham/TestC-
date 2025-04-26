#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[n];
    cout << "Nhap " << n << " phan tu:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    set<int> tapGiaTri;
    for (int i = 0; i < n; i++) {
        tapGiaTri.insert(a[i]); // set sẽ tự loại bỏ giá trị trùng
    }
   

    cout << "So luong gia tri phan biet la: " << tapGiaTri.size() << endl;

    return 0;
}









