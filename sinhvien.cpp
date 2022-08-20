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
// Ham nhap 1 sinh vien
void Nhap(SinhVien &sv)
{
    fflush(stdin);
    cout << "\nNhap id: ";
    getline(cin, sv.id);
    cout << "\nNhap name: ";
    getline(cin, sv.name);
    cout << "\nNhap age: ";
    cin >> sv.age;
    cout << "\nNhap diem tb: ";
    cin >> sv.diem_tb;
}
// AHam xuat 1 sinh vien
void Xuat(SinhVien sv)
{
    cout << "\nId: " << sv.id;
    cout << "\nName: " << sv.name;
    cout << "\nAge: " << sv.age;
    cout << "\nDiem trung binh: " << sv.diem_tb;
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
void Xuat_Danh_Sach(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nThong tin sinh vien thu " << i + 1;
        Xuat(a[i]);
    }
}
void Tim_Kiem_Diem(SinhVien a[], int n, float diem)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].diem_tb == diem)
        {
            cout << "\nDanh sach sinh vien co diem " << diem;
            Xuat(a[i]);
        }
    }
}
void Them(SinhVien a[], int &n, int vt, SinhVien sv)
{
    for (int i = n - 1; i >= vt; i--)
    {
        a[i + 1] = a[i];
    }
    a[vt] = sv;
    n++;
}

void HoanVi(SinhVien &x, SinhVien &y)
{
    SinhVien tam;
    tam = x;
    x = y;
    y = tam;
}
void Sap_Xep(SinhVien a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].diem_tb > a[j].diem_tb)
            {
                HoanVi(a[i], a[j]);
            }
        }
    }
}
void Xoa(SinhVien a[], int &n, int vt)
{
    for (int i = vt + 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    n--;
}
void Xoa_Duoi_5(SinhVien a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].diem_tb < 5)
        {
            Xoa(a, n, i);
            i--;
        }
    }
}
int main()
{
    SinhVien a[100];
    int n;
    cout << "\nNhap so luong sinh vien: ";
    cin >> n;

    cout << "\n\t\tNhap thong tin sinh vien\n";
    Nhap_Danh_Sach(a, n);

    cout << "\n\t\tXuat danh sach sinh vien\n";
    Xuat_Danh_Sach(a, n);

    float diem_tk;
    cout << "\nNhap diem can tim kiem: ";
    cin >> diem_tk;
    Tim_Kiem_Diem(a, n, diem_tk);

    int index;
    SinhVien sv;
    cout << "\nNhap vi tri can them: ";
    cin >> index;
    cout << "\nNhap thong tin sinh vien can them\n";
    Nhap(sv);
    cout <<"\n\t\tXuat danh sach sinh vien sau hi them\n";
    Them(a, n, index, sv);
    cout << "\n\t\tXuat danh ach sinh vien sau khi them\n";
    Xuat_Danh_Sach(a, n);

    Sap_Xep(a, n);
    cout << "\n\t\tDanh sach sinh vien co diem trung binh tang dan\n";
    Xuat_Danh_Sach(a, n);

    Xoa_Duoi_5(a, n);
    cout << "\nDanh sach sinh vien co diem trung binh duoi 5\n";
    Xuat_Danh_Sach(a, n);
    
    cout << endl;
    system("pause");
    return 0;
}