#include <stdio.h>
#include <conio.h>

void main()
{
int soTruoc=0,hienTai=1,n;
printf("Nhap n:");
scanf("%d",&n);
printf("Phan tu thu %d la:",n);
for(;n>2;n--)
{
hienTai+=soTruoc;
soTruoc=hienTai-soTruoc;
}
if(n==1) printf("%d\n",soTruoc);
else printf("%d\n",hienTai);
getche();
}
