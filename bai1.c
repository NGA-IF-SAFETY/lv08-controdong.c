#include <stdio.h>

#include <stdlib.h>

void main()

{

    int i,n;

    printf("Nhap so phan tu n vao:");

    scanf("%d",&n);

    int *p = (int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)

    {

        printf("\nNhap gia tri phan tu thu %d:",i+1);

        scanf("%d",p+i);

    }

    printf("Day da nhap:\n");

     for(i=0;i<n;i++)

    {

       printf("%3d  ",*(p+i));

    }

}
