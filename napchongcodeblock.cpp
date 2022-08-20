#include<iostream>

using namespace std;
#include<fstream>

struct phanso
{
    int tuso;
    int mauso;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO &ps){
    cout << "\nNhap tu so: ";
    cin >> ps.tuso;
    cout << "\nNhap mau so: ";
    cin >> ps.mauso;
}
void Xuat(PHANSO ps){
    cout << ps.tuso << "/" << ps.mauso;
}
//Ham cong 2 phan so
PHANSO Cong_2_PS(PHANSO x, PHANSO y){
    PHANSO tam;
    tam.tuso = (x.tuso * y.mauso) + (y.tuso * x.mauso);
    tam.mauso = x.mauso * y.mauso;
    return tam;
}
// nap cong toan tu nhap >>
istream& operator >>(istream& is, PHANSO &ps){
    cout << "\nNhap tu so: ";
    is >> ps.tuso;
    cout << "\nNhap mau so: ";
    is >> ps.mauso;
    return is;

}
// nap chong toan tu xuat <<
ostream& operator >>(ostream& os, PHANSO ps){
    cout << ps.tuso << "/" << ps.mauso;
    return os;
}
int main(){
    PHANSO x;
    PHANSO y;
    cout << "\nNhap phan so x\n";
    cin >> x;
    cout << "\nNhap phan so y\n";
    cin >> y;
    cout << "\nXuat phan so x\n";
    cout << x;
    cout << "\nXuat phan so y\n";
    cout << y;


    cout << endl;
    system("pause");
    return 0;

}
