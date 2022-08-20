#include<iostream>
#include<string>
using namespace std;

int main(){
    string hoTen;
    int age;
    cout << "\nEnter age: ";
    cin >> age;
    cin.ignore();
    cout << "\nEnter name: ";
    getline(cin, hoTen);
    // cout << "\nKich thuoc that cua chuoi: "<< hoTen.capacity();

    // //Xuat ra tung ki tu
    // for (int i = 0; i < hoTen.length(); i++)
    // {
    //     cout << hoTen[i] << endl;
    // }
    //ham xoa mot ki tu tai vi tri bat ki
    // int n;
    // cout << "\nNhap vao vi tri can xoa: ";
    // cin >> n;
    // hoTen.erase(hoTen.begin() + n );
    // cout << "\nChuoi sau khi xoa: "<< hoTen;

    // Them ki tu vao vi tri bat ki
    int index;
    cout << "\nNhap vao vi tri can them : ";
    cin >> index;
    cout << "\nNhap vao chuoi can them: ";

    char x;
    cin >> x;
    
    hoTen.insert(hoTen.begin()+ index, x);
    cout << "\nChuoi sau khi them : "<< hoTen;
    

    system("pause");
    return 0;
}