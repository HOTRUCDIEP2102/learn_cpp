#include <iostream>
using namespace std;

void Nhap_Mang(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "\nNhap gia tri cua mang a[" << i << "] =  ";
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
// Kiem tra SNT
bool check_Prime(int n) // int n = a[i];
{
  bool check = true;
  if (n < 2)
  {
    check = false;
  }
  else
  {
    for (int j = 2; j < n; j++)
    {
      if (n % j == 0)
      {
        check = false;
        break;
      }
    }
  }
  return check;
}
// Xuất các nguyên tử là các sô nguyên tố

void Xuat_So_NT(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (check_Prime(a[i]) == true)
    {
      cout << a[i] << " ";
    }
  }
}
// //Kiem tra số siêu nguyên tố
void Check_Super_Prime(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int temp = a[i];
    bool check = true;

    while (temp != true)
    {
      if (check_Prime(temp) == true)
      {
        temp=temp/ 10;
      }

      else
      {
        //check = false;
        break;
      }
    }
    if (check == true)
    {
      cout << a[i] << " ";
    }
  }
}
int main()
{
  int n;
  cin >> n;
  int a[n];

  cout << "\n\t\tNhap Mang";
  Nhap_Mang(a, n);

  cout << "\n\t\tXuat Mang" << endl;
  Xuat_Mang(a, n);

  cout << "\nCac so NT trong mang\n";
  Xuat_So_NT(a, n);

  cout << "\n\t\tCac so sieu nguyen to trong mang\n";
  Check_Super_Prime(a, n);

  system("pause");
  return 0;
}
