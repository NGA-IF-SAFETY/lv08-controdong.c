
#include <stdio.h>

#include <stdlib.h>

#include<conio.h>

void main()

{

    int i,s,n;
    s=0;

    printf("Nhap so phan tu:");

    scanf("%d",&n);

    int *p = (int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)

    {

        printf("\nNhap gia tri phan tu thu %d:",i);

        scanf("%d",p+i);

    }

         for (i=0;i<n;i++)
    {
         s=*(p+i)+s;
         
       }   
       
    printf("\n tong day so la:%d ",s);

}
