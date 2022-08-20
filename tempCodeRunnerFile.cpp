#include<iostream>

using namespace std;
/*Bài 3. Khai báo cấu trúc 1 phân số biết rằng 1 phân số luôn luôn có tử số và mẫu số
1. Nhập danh sách các phân số
2. Xuất danh sách các phân số
3. Rút gọn các phân số
*/
struct phanso
{
    int tuso;
    int mauso;

};
typedef struct phanso PhanSo;
void Nhap_Phan_So(PhanSo &x){
     cout << "\nNhap tu so: ";
     cin >> x.tuso;
     cout << "\nNhap mau so: ";
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

void  Xuat_Danh_Sach_Phan_So(DanhSach ds){
    for (int i = 0; i < ds.n; i++)
    {
        Xuat_Phan_So(ds.arr[i]);
        cout << endl;
        
    }
    
}

//Ham rut gon phan so
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
            x-=y;
        }
        else
        {
            y-=x;
        }
        
    }
    
    return x;
}
//Ham rut gon phan so
void Rut_Gon_Phan_So(PhanSo &x){
    int ucln = UCLN(x.tuso, x.mauso);
    x.tuso = x.tuso / ucln;
    x.mauso = x.mauso / ucln;
}
void Rut_Gon_Danh_SaCh(DanhSach &ds){
    for (int i = 0; i < ds.n; i++)
    {
        Rut_Gon_Phan_So(ds.arr[i]);
    }
    
}

// Ham cong 2 phan so
PhanSo Cong_2_Phan_So(PhanSo x, PhanSo y){
    PhanSo ketqua;
    if (x.mauso != y.mauso)
    {
        ketqua.tuso = (x.tuso * y.mauso) + (y.tuso * x.mauso);
        ketqua.mauso = x.mauso * y.mauso;
    }
    else
    {
        ketqua.tuso = x.tuso + y.mauso;
        ketqua.mauso = x.mauso;
    }
    return ketqua;
}
// ham cong danh sach cac phan so
PhanSo Cong_Danh_Sach_Phan_So(DanhSach ds){
    PhanSo ketqua = ds.arr[0];
   
    for (int i = 0; i < ds.n; i++)
    {
        ketqua = Cong_2_Phan_So(ketqua, ds.arr[i]);
    }
    return ketqua;
    
}
int main(){
    DanhSach ds;
    
    cout << "\nNhap danh so luong phan so: ";
    cin >> ds.n;

    // Cap phat dong trong struct
    ds.arr = new PhanSo[ds.n];

    cout << "\n\n\t\tNHAP DANH SACH PHAN SO\n";
    Nhap_Danh_Sach_Phan_So(ds);

    cout << "\n\n\t\tXUAT DANH SACH PHAN SO\n";
    Xuat_Danh_Sach_Phan_So(ds);

    cout << "\n\n\t\tXUAT DANH SACH PHAN SO SAU KHI RUT GON\n";
    Rut_Gon_Danh_SaCh(ds);
    Xuat_Danh_Sach_Phan_So(ds);

    cout << "\n\n\t\tTONG DANH SACH CAC PHAN SO\n";
    PhanSo ketqua;
    ketqua = Cong_Danh_Sach_Phan_So(ds);
    Rut_Gon_Phan_So(ketqua);
    Xuat_Phan_So(ketqua);


    system("pause");
    return 0;
}