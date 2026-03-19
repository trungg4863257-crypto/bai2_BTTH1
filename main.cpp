#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
struct PhanSo {
    int tu, mau;
};
void nhap(PhanSo &ps) {
    cout << "Nhap tu: ";
    cin >> ps.tu;
    cout << "Nhap mau: ";
    cin >> ps.mau;
}
void rutGon(PhanSo &ps) {
    int g = gcd(ps.tu, ps.mau);
    ps.tu /= g;
    ps.mau /= g;
}
void xuat(PhanSo ps) {
    cout << ps.tu << "/" << ps.mau << endl;
}
int main() {
    PhanSo ps;
    nhap(ps);
    rutGon(ps);
    cout << "Phan so sau khi rut gon: ";
    xuat(ps);
    return 0;
}
