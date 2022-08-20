#include <iostream>
using namespace std;

void Nhap_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap gia tri cua mang a[" << i << "] : ";
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
void Them(int a[], int &n, int x, int k)
{
	for (int i = n - 1; i >= k; i++)
	{
		a[i + 1] = a[i];
	}
	a[k] = x;
	n++;
}

int main()
{
	cout << "\nNhap so luong phan tu cua mang : ";
	int n;
	cin >> n;
	int a[n];

	cout << "\n\tNhap Mang";
	Nhap_Mang(a, n);

	cout << "\n\tXuat Mang" << endl;
	Xuat_Mang(a, n);

	cout << "\nNha gia tri can them : ";
	int x;
	cin >> x;

	cout << "\nNhap vi tri can them : ";
	int vitri;
	cin >> vitri;

	Them(a, n, x, vitri);
	cout << "\nMang sau khi them" << endl;
	Xuat_Mang(a, n);

	system("pause");
	return 0;
}
