#include<iostream>
using namespace std;
#define MAX_DONG 100
#define MAX_COT 100

/*
1. Tính tổng các số nguyên tố trong ma trận
2. Tính tổng các phần tử trên từng dòng
3. Tính tổng các phần tử trên từng cột
4. Xuất các phần tử trên đường chéo chính
5. Xuất các phần tử trên đường chéo phụ
.....
*/


// hàm nhập mảng 2 chiều
void Nhap_Mang_2_Chieu(int a[][MAX_COT], int dong, int cot)
{
	// điều khiển chỉ số dòng
	for (int i = 0; i < dong; i++)
	{
		// điều khiển chỉ số cột
		for (int j = 0; j < cot; j++)
		{
			cout << "\nNhap phan tu a[" << i << "][" << j << "] = ";
			cin >> a[i][j]; // nhập phần tử tại dòng thứ i và cột thứ j
		}
	}
}

// hàm xuất mảng 2 chiều
void Xuat_Mang_2_Chieu(int a[][MAX_COT], int dong, int cot)
{
	// điều khiển chỉ số dòng
	for (int i = 0; i < dong; i++)
	{
		// điều khiển chỉ số cột
		for (int j = 0; j < cot; j++)
		{
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}

// hàm kiểm tra số nguyên tố
bool Kiem_Tra_So_Nguyen_To(int n)
{
	if (n < 2)
	{
		return false;
	}
	else
	{
		if (n == 2)
		{
			return true;
		}
		else
		{
			if (n % 2 == 0)
			{
				return false;
			}
			else
			{
				for (int i = 2; i < n; i++)
				{
					if (n % i == 0)
					{
						return false;
					}
				}
			}
		}
	}
	return true;
}

// Tính tổng các số nguyên tố trong ma trận
int Tinh_Tong_So_Nguyen_To(int a[][MAX_COT], int dong, int cot)
{
	int tong = 0;
	// duyệt qua từng phần tử trong mảng 2 chiều
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (Kiem_Tra_So_Nguyen_To(a[i][j]) == true)
			{
				tong += a[i][j];
			}
		}
	}
	return tong;
}

// Tính tổng các phần tử trên từng dòng
void Tinh_Tong_Tung_Dong(int a[][MAX_COT], int dong, int cot)
{
	// duyệt qua từng phần tử trong mảng 2 chiều
	for (int i = 0; i < dong; i++)
	{
		int tong = 0;
		for (int j = 0; j < cot; j++)
		{
			tong += a[i][j]; // tính tổng trên dòng thứ i
		}
		cout << "\n\t TONG TREN DONG THU " << i << ": " << tong;
	}
}

// Tính tổng các phần tử trên từng cột
void Tinh_Tong_Tung_Cot(int a[][MAX_COT], int dong, int cot)
{
	// duyệt qua từng phần tử trong mảng 2 chiều
	for (int i = 0; i < cot; i++)
	{
		int tong = 0;
		for (int j = 0; j < dong; j++)
		{
			tong += a[j][i]; // tính tổng trên cột thứ i
		}
		cout << "\n\t TONG TREN COT THU " << i << ": " << tong;
	}
}

// Xuất các phần tử trên đường chéo chính
void Phan_Tu_Duong_Cheo_Chinh(int a[][MAX_COT], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		cout << a[i][i] << " ";
	}
}

// Xuất các phần tử trên đường chéo phụ
void Phan_Tu_Duong_Cheo_Phu(int a[][MAX_COT], int dong, int cot)
{
	for (int i = 0; i < cot; i++)
	{
		cout << a[i][cot - i - 1] << " ";
	}
}
int main()
{
	// khai báo mảng 2 chiều chứa tối đa MAX_DONG X MAX_COT phần tử
	int a[MAX_DONG][MAX_COT];
	int dong;
	int cot;

	// kiểm tra số dòng
	cout << "\nNhap so dong: ";
	cin >> dong;
	cout << "\nNhap so cot : ";
	cin >> cot;

	cout << "\n\n\t\t NHAP GIA TRI CHO MANG 2 CHIEU\n";
	Nhap_Mang_2_Chieu(a, dong, cot);
	cout << "\n\n\t\t MANG 2 CHIEU\n";
	Xuat_Mang_2_Chieu(a, dong, cot);


	/* XỬ LÝ MẢNG 2 CHIỀU */
	cout << "\n\n\t\t TONG CAC SO NGUYEN TO\n";
	cout << Tinh_Tong_So_Nguyen_To(a, dong, cot);

	Tinh_Tong_Tung_Dong(a, dong, cot);

	Tinh_Tong_Tung_Cot(a, dong, cot);

	cout << "\n\n\t\t CAC PHAN TU NAM TREN DUONG CHEO CHINH: ";
	Phan_Tu_Duong_Cheo_Chinh(a, dong, cot);

	cout << "\n\n\t\t CAC PHAN TU NAM TREN DUONG CHEO PHU: ";
	Phan_Tu_Duong_Cheo_Phu(a, dong, cot);
	system("pause");
	return 0;
}
