#include <iostream>
#include <cstring>
#include<string>
using namespace std;
int main() {
    char str = "01234567890";
    string t; 

    strncpy( t, str+3, 5 ); /*Cắt 5 ký tự từ vị trí thứ 3 */
    t[5] = '\0';            /*Thêm ký tự kết thúc chuỗi vào kết quả*/
    cout << t ;
}
//34567
