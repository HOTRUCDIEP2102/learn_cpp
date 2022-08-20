#include<iostream>
#include<string>
using namespace std;

struct phanso
{
    int tuso;
    int mauso;
};
typedef struct phanso PhanSo;

void Nhap_Phan_So(PhanSo &ps){
    cout << "\nNhap tu so: ";
    cin >> ps.tuso;
    cout << "\nNhap mau so: ";
    cin >> ps.mauso;
}

void Xuat_Phan_So(PhanSo ps){
    cout << ps.tuso << "/" << ps.mauso;
}

// struct danh sach phan so
struct danhsach
{
    PhanSo *arr;
    int n;
};
typedef struct danhsach DanhSach;
//Nhap danh sach phan so
void Nhap_Danh_Sach_Phan_So(DanhSach &ds){
    for (int i = 0; i < ds.n; i++)
    {
        cout << "\nNhap phan so thu "<< i+1;
        Nhap_Phan_So(ds.arr[i]);
    }

}
// Xuat danh sach phan so
void Xuat_Danh_Sach_Phan_So(DanhSach ds){
    for (int i = 0; i < ds.n; i++)
    {
        cout << ds.arr[i];
    }

}
int main(){
    DanhSach ds;

    cout << "\nNhap so luong phan so: ";
    cin >> ds.n;
    cout << "\n\n\t\tNHAP DANH SACH PHAN SO\n";
    Nhap_Danh_Sach_Phan_So(ds);
    cout << "\n\n\t\tXUAT DANH SACH PHAN SO\n";
    Xuat_Danh_Sach_Phan_So(ds);
    system("pause");
    return 0;
}
