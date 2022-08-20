#include <iostream>
using namespace std;

void Nhap_Mang(int *a, int n){
  for (int i = 0; i < n; i++)
  {
    cout << "\nNhap gia tri vao mang a["<<i<<"] : ";
    cin >> a[i];
  }
  
}

void Xuat_Mang(int *a, int n){
  for (int i = 0; i < n; i++)
  {
    cout << a[i]<< " ";
  }
  
}
int main()
{
  int n;
  do
  {
    cout << "\nNhap so luong phan tu mang: ";
    cin >> n;
    if (n<=0)
    {
      cout << "\nSo luong phan tu khong hop le!";
      system("pause");
    }
    
  } while (n<=0);
  
  int *a = new int[n];

  cout << "\n\tNhap Mang";
  Nhap_Mang(a, n);
  cout << "\n\tXuat Mang\n";
  Xuat_Mang(a, n);

  cout << endl;

  system("pause");
  return 0;
}