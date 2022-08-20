#include<iostream>
using namespace std;

void Nhap_Mang(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap gia tri vao mang a["<<i<<"]: ";
        cin >> a[i];
    }

}
void Xuat_Mang(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<< " ";
    }

}
void Cap_Phat_Vung_Nho(int *&a, int vung_nho_moi, int vung_nho_cu){
    int *temp = new int[vung_nho_cu];
    for (int i = 0; i < vung_nho_cu; i++)
    {
        temp[i] = a[i];
    }
    delete[] a;

    a = new int[vung_nho_moi];
    for (int i = 0; i < vung_nho_moi; i++)
    {
        a[i] = temp[i];
    }
    delete[] temp;

}
void Them(int *&a, int &n, int x, int k){
    Cap_Phat_Vung_Nho(a, n+1, n);
    for (int i = n-1; i >= k; i--)
    {
        a[i+1] = a[i];
    }
    a[k] = x;
    n++;

}
void Xoa(int *&a, int &n, int k){
    for (int i = k+1; i < n; i++)
    {
        a[i-1]  = a[i];
    }
    n--;
    Cap_Phat_Vung_Nho(a, n, n);
}
int main(){
    int n;
    int *a = new int[n];
    do
    {
        cout << "\nNhap so luong phan tu mang: ";
        cin >> n;
        if (n<=0)
        {
            cout << "\nSo luong phan tu mang khong hop le!!!!";
            system("pause");
        }

    } while (n<=0);

    cout << "\nNhap Mang";
    Nhap_Mang(a, n);

    cout << "\nXuat Mang"<< " ";
    Xuat_Mang(a, n);

    cout << "\nNhap gia tri can them: ";
    int x;
    cin >> x;

    cout << "\nNhap vi tri can them: ";
    int vt;
    cin >> vt;

    Them(a, n, x, vt);
    Xuat_Mang(a, n);

    cout << "\nNhap vao vi tri can Xoa: ";
    int index;
    cin >> index;
    Xoa(a, n, index);
    Xuat_Mang(a, n);





    cout << endl;
    system("pause");
    return 0;
}
