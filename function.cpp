#include<iostream>
using namespace std;

// hàm nhập mảng
void Nhap_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}

// hàm xuất mảng
void Xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

// hàm xuất các phần tử là số nguyên tố
void Xuat_Cac_So_Nguyen_To(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		// dùng biền KT là CỜ HIỆU...
		bool KT = true; // ...giả sử a[i] là số nguyên tố
		// ĐI KIỂM TRA CÁI GIẢ SỬ
		if (a[i] < 2)
		{
			KT = false;
		}
		else
		{
			for (int j = 2; j < a[i]; j++)
			{
				if (a[i] % j == 0)
				{
					KT = false; // cập nhật lại giả sử ban đầu là false
					break; // dừng việc kiểm tra vì đã phát hiện a[i] không phải là số nguyên tố
				}
			}
		} 

		// KIỂM TRA LẠI CÁI GIẢ SỬ KT BAN ĐẦU ĐỂ ĐƯA RA KẾT LUẬN
		if (KT == true)
		{
			cout << a[i] << "  ";
		}
	}
}

// hàm xuất các phần tử là số siêu nguyên tố
void Xuat_Cac_So_Sieu_Nguyen_To(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int tam = a[i]; // cho biến tam giữ giá trị của a[i]
		bool KT = true; // giả sử a[i] là sô siêu nguyên tố
		// kiểm tra số siêu nguyên tố
		while (tam != 0)
		{
			// dùng biền KT là CỜ HIỆU...
			KT = true; // ...giả sử tam <=> a[i] là số nguyên tố
			// ĐI KIỂM TRA CÁI GIẢ SỬ
			if (tam < 2)
			{
				KT = false;
			}
			else
			{
				for (int j = 2; j < tam; j++)
				{
					if (tam % j == 0)
					{
						KT = false; // cập nhật lại giả sử ban đầu là false
						break; // dừng việc kiểm tra vì đã phát hiện a[i] không phải là số nguyên tố
					}
				}
			}

			// KIỂM TRA LẠI CÁI GIẢ SỬ KT BAN ĐẦU ĐỂ ĐƯA RA KẾT LUẬN
			if (KT == true)
			{
				tam = tam / 10; // loại bỏ chữ số bên phải để tiếp tục đi kiểm tra
			}
			else
			{
				break; // dừng kiểm tra và ra ngoài kết luận
			}
		}

		// sau khi thoát khỏi vòng lặp while ==> kiểm tra lại biến KT 
		if (KT == true)
		{
			cout << a[i] << "   ";
		}
	}
}

int main()
{	
	int a[100];  // chứa tối đa 100 phần tử số nguyên
	int n; // số lượng phần tử hiện có trong cái mảng
	cout << "\nNhap so luong phan tu mang: ";
	cin >> n;

	// NHẬP CÁC GIÁ TRỊ CHO TỪNG PHẦN TỬ CỦA MẢNG
	cout << "\n\n\t\t NHAP MANG\n";
	Nhap_Mang(a, n);
	
	// XUẤT CÁC GIÁ TRỊ CỦA MẢNG
	cout << "\n\n\t\t XUAT MANG\n";
	Xuat_Mang(a, n);

	// XUẤT CÁC PHẦN TỬ LÀ SỐ NGUYÊN TỐ
	cout << "\n\n\t\t CAC SO NGUYEN TO: ";
	Xuat_Cac_So_Nguyen_To(a, n);

	cout << "\n\n\t\t CAC SO SIEU NGUYEN TO: ";
	Xuat_Cac_So_Sieu_Nguyen_To(a, n);


	system("pause");
	return 0;
}