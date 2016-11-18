#include <stdio.h>

#include <stdlib.h>

#include<conio.h>

void main()

{
    int i,j,n,t;

    printf("Nhap so phan tu:");
    
    scanf("%d",&n);

    int *p = (int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu thu %d:",i);

        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        t = *(p+i);

        for(j=i+1;j<n;j++)
        {
            if(t > *(p+j))

            {

              *(p+i) = *(p+j);
                *(p+j) = t;
                t = *(p+i);
            }
        }
    }
    printf("\nDay da duoc sap xep la:");

    for(i=0;i<n;i++)
    {
        printf("%6d  ",*(p+i));
    }

}
