#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

void main()

{

    int i;

   int *p=(int *)malloc(5*sizeof(int));

    for(i=0;i<5;i++)

    {

        printf("\nNhap gia tri phan tu thu %d:",i);

        scanf("%d",p+i);

    }

    printf("\nDay da nhap:");

    for(i=0;i<5;i++)

    {

        printf("%6d  ",*(p+i));

    }

    free(p);

}
