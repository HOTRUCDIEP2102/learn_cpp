#include<stdio.h>
#include<conio.h>
#include<string.h>

void Chuyen_Ki_Tu(char s[]){
for (int i = 0; i < strlen(s); i++)
{
    if (s[i]>='a' && s[i]<='z')
    {
        s[i]-=32;
    }

}


}
int main(){
char s[30];
printf("\nNhap s: ");
gets(s);
printf("\nChuoi s sau khi nhap: %s", s);
Chuyen_Ki_Tu(s);
printf("\nChuoi s sau khi chuyem: %s", s);
getch();
return 0;
}
