#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

void main()

{

    int i,n,t;

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
    
    t=*(p+i);
    
    if (t%2==0) printf("\n cac so chan la :%d",t);
    
    else
    
        printf("\n cac so le la :%d",t);

    }


}
