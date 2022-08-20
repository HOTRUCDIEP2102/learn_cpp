#include <iostream>
using namespace std;

void Nhap_Mang(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "\nNhap gia tri vao mang a[" << i << "] : ";
    cin >> a[i];
  }
}
void Xuat_Mang(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
}
// Sap xep mang tang dan
void sapXep(int a[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}
// Liet ke cac gia tri chan dau tien cua mang
// 1. ham kiem tra cac gia tri chan
bool checkEven(int x)
{
  while (x > 10)
  {
    x /= 10;
  }
  if (x % 2 != 0)
  {
    return false;
  }
  return true;
}
// 2. Liet ke cac gia tri chan cua mang
void List(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (checkEven(a[i]) == true)
    {
      cout << a[i] << " ";
    }
  }
}
// Dem so lan xuat hien trong mang
int countTime(int a[], int n, int x)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == x)
    {
      count++;
    }
  }
  return count;
}
// Tim kiem giá tri hcan đầu tiên
void checkEvenFist(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      cout << a[i];
      break;
    }
  }
}

int main()
{
  cout << "\nNhap so luong phan tu mang : ";
  int n;
  cin >> n;
  int a[n];

  cout << "\nNhap mang" << endl;
  Nhap_Mang(a, n);

  cout << "\nXuat Mang" << endl;
  Xuat_Mang(a, n);

  cout << "\nXap sep mang tang dan" << endl;
  sapXep(a, n);
  Xuat_Mang(a, n);

  cout << "\nLiet ke cac phan tu chan trong mang" << endl;
  List(a, n);

  cout << "\nNhap gioa tri can dem: ";
  int x;
  cin >> x;

  cout << "\nSo lan xuat hien cua" << x << "trong mang la: " << countTime(a, n, x);

  cout << "\nGia tri chan dau tien cua mang: ";
  checkEvenFist(a, n);

  cout << endl;
  system("pause");
  return 0;

  cout << endl;

  system("pause");
  return 0;
}
