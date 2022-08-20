#include<iostream>
#include<fstream>
using namespace std;

struct phanso
{
    int tuso;
    int mauso;
};
typedef struct phanso PhanSo;
void Nhap(PhanSo &ps){
    cout << "\nNhap tu so: ";
    cin >> ps.tuso;
    cout << "\nNhap mau so: ";
    cin >> ps.mauso;

}
void Xuat(PhanSo ps){
    cout << ps.tuso << "/" << ps.mauso;
}
PhanSo operator+(PhanSo x, PhanSo y){
    PhanSo tam;
    tam.tuso = (x.tuso *  y.mauso) + (x.mauso * y.tuso);
    tam.mauso = (x.mauso + y.mauso);
    return tam;
}
//Nap chong
istream& operator>>(istream is, PhanSo& ps){
    cout << "\nNhap tu so: ";
    is >> ps.tuso;
    cout << "\nNhap mau so: ";
    is >> ps.mauso;
    return is;
}

//Nap chong toan tu
ostream& operator<<(ostream os,PhanSo ps){
    cout << ps.tuso <<"/"<< ps.mauso;
}

int main(){
   
   PhanSo x;
   PhanSo y;
   cout << "\n\t\tNhap phan so x\n";
   cin >> x;
   cout << "\n\t\tNhap phan so y\n";
   cin >> y;
   cout << "\nXuat phan so x\n";
   cout << x;
   cout << "\nXuat phan so y\n";
   cout << y;

   PhanSo tam; 
   cout << "\nTong cua 2 phan so la: "<< x+y;
    
    system("pause");
    return 0;
}