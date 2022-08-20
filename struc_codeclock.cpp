#include<iostream>
#include<string>
using namespace std;
/*
Thiết kế chương trình lưu trữ thông tin sinh viên của 1 trường đại học,
biết thông tin sinh viên gồm:
- Mã số
- Họ tên
- Năm sinh
- Điểm trung bình
1. Khai báo cấu trúc sinh viên
2. Nhập danh sách sinh viên
3. Xuất danh sách sinh viên
4. Tìm kiếm thông tin sinh viên dựa vào điểm trung bình
5. Thêm 1 sinh viên vào vị trí bất kỳ
6. Xóa 1 sinh viên có điểm trung bình dưới 5
7. Sắp xếp sinh viên tăng dần theo điểm trung bình
*/

struct sinhvien
{
    string id;
    string name;
    int age;
    float meMark;

};
typedef struct sinhvien SinhVien;
void Nhap(SinhVien &sv){
    cout << "\nEnter ID: ";
    fflush(stdin);
    getline(cin, sv.id);
    cout << "\nEnter name: ";
    getline(cin, sv.name);
    cout << "\nEnter age: ";
    cin >> sv.age;
    cout << "\nEnter medium score: ";
    cin >> sv.meMark;
}
void Xuat(SinhVien sv){

    cout << "\nID: "<< sv.id;
    cout << "\nName: "<< sv.name;
    cout << "\nAge: "<< sv.age;
    cout << "\nMedium score: "<< sv.meMark;

}
//Ham nhap nhieus inh vien
void NhapTT(SinhVien a[], int n){
    for (int i = 0; i <n ; i++)
    {
        cout << "\nNhap thong tin sinh vien thu : "<< i+1;
        Nhap(a[i]);
    }

}
void XuatTT(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << "\nThong tin sinh vien thu: "<< i+1;
        Xuat(a[i]);
    }

}
//4. Tìm kiếm thông tin sinh viên dựa vào điểm trung bình
void checkmark(SinhVien a[], int n, float mark){
        int dem = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i].meMark == mark)
            {
                cout << "\nThong tin sinh thu: "<< dem++;
                Xuat(a[i]);
            }

        }

}
// them
void Them(SinhVien a[], int &n, int k, SinhVien x){
        for (int i = n-1; i >= k; i--)
        {
            a[i+1] = a[i];
        }
        a[k] = x;
        n++;
}
//Xoa
void Xoa(SinhVien a[], int &n, int k){
    for (int i = k+1; i < n ; i++)
    {
        a[i-1] = a[i];
    }
    n--;
}
// Xoa SV co diem TB duoi 5
void XoaTB(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        if (a[i].meMark < 5)
        {
            Xoa(a, n, i);
            i--;
        }

    }

}
// Hoa Vi
void hoanVi(SinhVien &x, SinhVien &y){
    SinhVien tam;
    tam = x;
    x = y;
    y = tam;
}
// Sap xep tang dan
void inShort(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1 ; i < n; j++)
        {
            if (a[i].meMark > a[j].meMark )
            {
                hoanVi(a[i], a[j]);
            }

        }

    }

}
// sap xep giam dan
void deShort(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; i < n; j++)
        {
            if (a[i].meMark < a[j].meMark)
            {
                hoanVi(a[i], a[j]);
            }

        }

    }

}
int main(){
    SinhVien a[100];
    int n;
    cout << "\n\t\tNhap so luong sinh vien: ";
    cin >> n;
    cout << "\n\t\tNhap thong tin sinh vien\n";
    NhapTT(a, n);
    cout << "\nXuat danh sach sinh vien\n";
    XuatTT(a, n);
    // check score
//    int score;
//    cout << "\nNhap diem can tim kiem: ";
//    cin >> score;
//
//    cout << "\n\t\tDanh sach sinh vien co diem " <<score<<endl;
//    checkmark(a, n, score);

    // them
    int index;
    SinhVien x;
    cout << "\nNhap vao vi tri can them: ";
    cin >> index;
    cout << "\nNhap thong tin sinh vien can them\n";
    NhapTT(x);

    cout << "\n\t\tDanh sach sinh vien sau khi them\n";
    Them(a, n, index, x);
    XuatTT(a, n);
//    //Xoa
//    int vitri;
//    cout << "\nNhap vao vi tri can xoa: ";
//    cin >> vitri;
//    Xoa(a, n, vitri);
//    cout <<"\n\t\tDanh sach sinh vien sau khi xoa\n";
//    XuatTT(a, n);
//    //Xoa duoi 5
//    XoaTB(a, n);
//    cout <<"\n\t\tDanh sachs sinh vien sau khi xoa diem trung binh duoi 5\n ";
//    XuatTT(a, n);





    system("pause");
    return 0;
}
