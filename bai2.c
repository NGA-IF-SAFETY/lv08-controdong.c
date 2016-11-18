#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

void main()

{

    int i,n, max, min ;

    printf("Nhap so phan tu n vao:");

    scanf("%d",&n);

    int *p = (int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)

    {

        printf("\nNhap gia tri phan tu thu %d:",i);

        scanf("%d",p+i);
    }


    min=*p;

    max=*p;

    for (i=0;i<n;i++)

    {

     if (*(p+i)>max) max=*(p+i);

     if (*(p+i)<min) min=*(p+i);

    }

        printf("\nMax= %d   \n",max);

        printf("\nMin= %d   \n",min);

}
