#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

void main()

{

    int i,n, GTLN , GTNN;

    printf("Nhap so phan tu:");

    scanf("%d",&n);

    int *p = (int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)

    {

        printf("\nNhap gia tri phan tu thu %d:",i);

        scanf("%d",p+i);
    }


    GTNN=*p;

    GTLN=*p;

    for (i=0;i<n;i++)

    {

     if (*(p+i)>GTLN) GTLN=*(p+i);

     if (*(p+i)<GTNN) GTNN=*(p+i);

    }

        printf("\n GTLN LA: %3d ",GTLN);

        printf("\n GTNN LA: %3d  ",GTNN);

}
