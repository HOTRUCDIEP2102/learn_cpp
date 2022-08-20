#include <iostream>
#include <string>
using namespace std;
struct sinhvien
{
    string id;
    string name;
    int age;
    float diem_tb;
};
typedef struct sinhvien SinhVien;
// Nhap 1 sinh vien
void Nhap(SinhVien &sv)
{
    fflush(stdin);
    cout << "\nNhap id:  ";
    getline(cin, sv.id);
    cout << "\nNhap name:  ";
    getline(cin, sv.name);
    cout << "\nNhap age: ";
    cin >> sv.age;
    cout << "\n\tNhap diem trung binh: ";
    cin >> sv.diem_tb;
}
// ham xuat 1 sinh vien
void Xuat(SinhVien sv)
{
    cout << "\nId: " << sv.id;
    cout << "\nName: " << sv.name;
    cout << "\nAge: " << sv.age;
    cout << "\n\tDiem trung binh: " << sv.diem_tb;
}
// Ham nhap nhieu sihn vien
void Nhap_Danh_Sach(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin sinh vien thu " << i + 1;
        Nhap(a[i]);
    }
}
// Ham xaut danh sach sinh vien
void Xuat_Danh_Sach(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nThong tin sinh vien thu " << i + 1;
        Xuat(a[i]);
    }
}
// Ham tim kiem diem trong danh sach sinh vien

void Tim_Kiem_Diem(SinhVien a[], int n, int diem)
{


    for (int i = 0; i < n; i++)
    {
        if (a[i].diem_tb == diem)
        {
            cout << "\nthong tin sinh vien co diem " << diem;
            Xuat(a[i]);
        }
    }
}
// ham thems inh vien vao i tri bat ki
void Them_Sinh_Vien(SinhVien a[], int &n, int vt, SinhVien sv)
{
    for (int i = n - 1; i >= vt; i--)
    {
        a[i + 1] = a[i];
    }
    a[vt] = sv;
    n++;
}
// Xoa sih vien co diem duoi 5
void Xoa(SinhVien a[], int &n, int vt)
{
    for (int i = vt + 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    n--;
}
void Xoa_Duoi_5(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        if (a[i].diem_tb > 5)
        {
            Xoa(a, n, i);
            i--;
        }

    }

}
void Hoan_Vi(SinhVien &x, SinhVien &y)
{
    SinhVien tam;
    tam = x;
    x = y;
    y = tam;
}
// Sap xep diem trung binh tang dan theo diem trung binh
void Sap_Xep(SinhVien a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].diem_tb > a[j].diem_tb)
            {
                Hoan_Vi(a[i], a[j]);
            }
        }
    }
}

int main()
{
    SinhVien sv;

    int n;
    cout << "\n\t\tNhap so luong sinh vien: ";
    cin >> n;
    SinhVien a[n];
    cout << "\n\t\tNhap thong tin sinh vien\n";
    Nhap_Danh_Sach(a, n);

    cout << "\n\t\tXuat danh sach sinh vien\n";
    Xuat_Danh_Sach(a, n);

    float diem_tk;
    cout << "\n\t\tNhap diem can tim kiem: ";
    cin >> diem_tk;
    Tim_Kiem_Diem(a, n, diem_tk);

    SinhVien x;
    int index;
    cout << "\n\tNhap vi tri can them: ";
    cin >> index;
    cout << "\n\t\tNhap thong tin cho sinh vien vua them\n";
    Nhap(x);
    Them_Sinh_Vien(a, n, index, x);
    cout << "\n\t\tXuat danh sach sinh vien sau khi them\n";
    Xuat_Danh_Sach(a, n);

    Sap_Xep(a, n);
    cout << "\n\t\tXuat danh sach sinh vien tang dan theo diem trung binh\n";
    Xuat_Danh_Sach(a, n);

    Xoa_Duoi_5(a, n);
    cout << "\n\t\tXuat danh sach sinh vien cos diem duoi 5\n";
    Xuat_Danh_Sach(a, n);

    system("pause");
    return 0;
}
