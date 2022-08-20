#include <iostream>
#include <string>
using namespace std;

struct sinhvien
{
    string id;
    string name;
    string age;
    float diemTb;
};
typedef struct sinhvien SinhVien;
// Nhap 1 sinh vien
void Nhap(SinhVien &sv, int n)
{
    fflush(stdin);
    cout << "\nNhap id: ";
    getline(cin, sv.id);
    cout << "\nNhap ten: ";
    getline(cin, sv.name);
    cout << "\nNhap tuoi: ";
    cin >> sv.age;
    cout << "\nNhap diem trung binh: ";
    cin >> sv.diemTb;
}
// Xuat 1 sinh vien
void Xuat(SinhVien sv, int n)
{
    cout << "\nId: " << sv.id;
    cout << "\nName: " << sv.name;
    cout << "\nAge: " << sv.age;
    cout << "\nDiem TB: " << sv.diemTb;
}
//Ham nhap nhieu sisnh vien
void Nhap_Danh_Sach_SV(SinhVien arr[], int n){
    
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap thong tin sinh vien thu "<<i+1;
        Nhap(arr[i]);
    }
    
}
void Xuat_Danh_Sach_SV(SinhVien arr[], int n){
    
    for (int i = 0; i < n; i++)
    {
        cout << "\nThong tin sinh vien thu "<<i+1;
        Xuat(arr[i]);
    }
    
}

int main()
{

    SinhVien arr[100];

    int n;
    cout << "\nNhap so luonh sinh vien: ";
    cin >> n;
    cout << "\nNhap danh sach sinh vien\n";
    Nhap(arr, n);
    cout << "\nXuat danh sach sinh vien\n";
    Xuat(arr, n);
    system("pause");
    return 0;
}