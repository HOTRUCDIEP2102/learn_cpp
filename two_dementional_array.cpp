#include <iostream>
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
// void Menu(){
//     while (true)
//     {
//         cout << "\n1Tính tổng các số nguyên tố trong ma trận" ;
        
//         cout << "\n2. Tính tổng các phần tử trên từng dòng" ;
//         cout << "\n3. Tính tổng các phần tử trên từng cột" ;
//         cout << "\n4. Xuất các phần tử trên đường chéo chính" ;
//         cout << "\n5.  Xuất các phần tử trên đường chéo phụ";
        

//     }
    
// }
void Nhap_Mang(int a[][MAX_COT], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << "\nNhap gia tri vao mang a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}
void Xuat_Mang(int a[][MAX_COT], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
// 1. Tính tổng các số nguyên tố trong ma trận
bool checkPrime(int n)
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
            if (n%2==0)
            {
               return false;
            }
            else
            {
                for (int i = 2; i < n; i++)
                {
                    if (n%i==0)
                    {
                        return false;
                    }
                    
                }
                
            }
            

        }
    }
    return true;
}

int sumPrime(int a[][MAX_COT], int dong, int cot)
{
    int sum = 0;
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            if (checkPrime(a[i][j] == true))
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}
// 2. Tính tổng các phần tử trên từng dòng
int sumRow(int a[][MAX_COT], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        int sum = 0;
        for (int j = 0; j < cot; j++)
        {
            sum += 0;
        }
        cout << "\n\ttong cac phan tu tren dong thu " << i << " = " << sum;
    }
}
// 3. Tính tổng các phần tử trên từng cột
int sumCollum(int a[][MAX_COT], int dong, int cot)
{
    for (int i = 0; i < cot; i++)
    {
        int tong = 0;
        for (int j = 0; j < dong; j++)
        {
            tong+= a[i][j];
        }
        cout << "\n\tTong cac phan tu tren cot thu " << i << " = " << tong;
    }
}
// 4. Xuất các phần tử trên đường chéo chính
void mainLine(int a[][MAX_COT], int dong, int cot)
{
    for (int i = 0; i < dong; i++)
    {
        cout << a[i][i] << " ";
    }
}
//4. Xuất các phần tử trên đường chéo phụ
void auLine(int a[][MAX_COT], int dong, int cot){
    for (int i = 0; i < cot; i++)
    {
        cout << a[i][cot - i -1]<< " ";
    }
    
}
int main(){
    int dong;
    cout << "\nNhap so dong : ";
    cin >> dong;
    int cot;
    cout << "\nNhap so cot : ";
    cin >> cot;
    int a[MAX_DONG][MAX_COT];

    cout << "\n\n\t\tNHAP MANG";
    Nhap_Mang(a, dong, cot);

    cout << "\n\n\t\tXUAT MANG\n";
    Xuat_Mang(a, dong, cot);

    cout << "\n\n\t\tTong cac so nguyen to\n";

    cout << sumPrime(a, dong, cot);
    sumRow(a, dong, cot);
    sumCollum(a, dong, cot);

    cout << "\n\n\t\tCac phan tu tren duong cheo chinh\n";
    mainLine(a, dong, cot);
    cout << "\n\n\t\tCac phan tu tren duong cheo phu\n";
    auLine(a, dong, cot);

    cout << endl;
    system("pause");
    return 0;

}