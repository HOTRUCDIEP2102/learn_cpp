#include <iostream>
using namespace std;

void Xuat_Mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

//
void Cap_Phat_Lai_Vung_Nho(int *&a, int memoryOld, int memoryNew)
{
    int *temp = new int[memoryOld];
    for (int i = 0; i < memoryOld; i++)
    {
        temp[i] = a[i];
    }
    delete[] a;
    a = new int[memoryNew];
    for (int i = 0; i < memoryNew; i++)
    {
        a[i] = temp[i];
    }
    delete[] temp;
}
//
void Menu(int *&a, int n)
{
    int choose;
    while (true)
    {
        system("cls");
        cout << "\n\n\t\t========MENU========";
        cout << "\n1. Nhap phan tu ";
        cout << "\n2. Xuat Mang";
        cout << "\n0. Ket Thuc Chuong Trinh";
        cout << "\n\n\t\t========END========";

        cout << "\nEnter Option: ";
        cin >> choose;

        switch (choose)
        {
        case 0:
        {
            return;
        }
        break;
        case 1:
        {
            int x;
            cout << "\nNhap gia tri vao mang: ";
            cin >> x;
            // Ki thuat sieu mang dong

            if (n == 0)
            {
                a = new int;
            }
            else
            {
                Cap_Phat_Lai_Vung_Nho(a, n, n + 1);
            }
            a[n] = x;
            n++;
        }break;
        case 2:
        {
            cout << "\n\n\t\tXUAT MANG"<<  endl;

            Xuat_Mang(a, n);
            cout << endl;
            system("pause");
        }

        break;
        }
    }
}

int main()
{
    int *a = NULL;
    int n = 0;
    Menu(a, n);

    delete[] a;

    cout << endl;
    system("pause");
    return 0;
}