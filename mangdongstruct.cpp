#include<iostream>
using namespace std;

struct phanso
{
    int tuso;
    int mauso;
};
typedef struct phanso PhanSo;
void Nhap_Phan_So(PhanSo &x){
    cout << "\nNhap tu so : ";
    cin >> x.tuso;
    cout << "\nNhap tu so : ";
    cin >> x.mauso;
} 
void Xuat_Phan_So(PhanSo x){
    cout << x.tuso << "/" << x.mauso;
}
struct danhsach
{
    PhanSo *arr;
    int n;
};
typedef struct danhsach DanhSach;
void Nhap_Danh_Sach_Phan_So(DanhSach &ds){
    for (int i = 0; i < ds.n; i++)
    {
        cout << "\nNhap phan so thu "<< i+1;
        Nhap_Phan_So(ds.arr[i]);
        
    }
    
}
void Xuat_Danh_Sach_Phan_So(DanhSach ds){
    for (int i = 0; i < ds.n; i++)
    {

        Xuat_Phan_So(ds.arr[i]);
        cout << endl;
    }
    
}
//tim ucln
int UCLN(int x, int y){
    if (x<0)
    {
        x *= -1;
    }
    if (y<0)
    {
        y *= -1;
    }
    
    while (x != y)
    {
        if (x>y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;    
        }
        
        
    }
    return x;
}
// Rut gon phan so
void Rut_Gon_Phan_So(PhanSo &x){
    int ucln = UCLN(x.tuso, x.mauso);
    x.tuso = x.tuso / ucln;
    x.mauso = x.mauso / ucln;  
 
}
void Rut_Gon_Danh_Sach_Phan_So(DanhSach &ds){
    for (int i = 0; i < ds.n; i++)
    {
        Rut_Gon_Phan_So(ds.arr[i]);
    }
    
}

//Ham tinh tong 2 phans o
PhanSo Tinh_Tong_Phan_So(PhanSo x, PhanSo y){
    PhanSo ketqua;
    if (x.mauso != y.mauso)
    {
        ketqua.tuso = (x.tuso * y.mauso) + (y.tuso * x.mauso);
        ketqua.mauso = x.mauso * y.mauso;
    }
    else
    {
        ketqua.tuso = x.tuso + y.tuso;
        ketqua.mauso = x.mauso;
    }
    return ketqua;
}

PhanSo Tong_Danh_Sach_Phan_So(DanhSach &ds){
    PhanSo ketqua = ds.arr[0];

    for (int i = 0; i < ds.n; i++)
    {
        ketqua = Tinh_Tong_Phan_So(ketqua, ds.arr[i]);
    }
    return ketqua;
}
int main(){
    DanhSach ds;
    cout << "\nNhap so luong phan so: ";
    cin >> ds.n; 
    cout << "\n\n\t\tNHAP DANH SACH PHAN SO\n";

    Nhap_Danh_Sach_Phan_So(ds);
    cout << "\n\n\t\tXUAT DANH SACH PHAN SO\n";
    Xuat_Danh_Sach_Phan_So(ds);

    cout << "\n\n\t\tDANH SACH PHAN SO SAU KHI RUT GON\n";
    Rut_Gon_Danh_Sach_Phan_So(ds);
    Xuat_Danh_Sach_Phan_So(ds);

     cout << "\n\n\t\tTONG DANH SACH PHAN SO\n";
     PhanSo ketqua;
     ketqua = Tong_Danh_Sach_Phan_So(ds);
     Rut_Gon_Phan_So(ketqua);
     Xuat_Phan_So(ketqua);
    
    

    system("pause");
    return 0;
}