#include <stdio.h>

#include <stdlib.h>

void main()

{

    int i,n;
    
    printf("nhap so phan tu n vao:"); 
    
    scanf("%d",&n);

    int *p=(int *)malloc(5*sizeof(int));

    for(i=0;i<n;i++)

    {

        printf("\nNhap gia tri phan tu thu %d:",i+1);

        scanf("%d",p+i);

    }

    printf("\nDay da nhap:");

    for(i=0;i<5;i++)

    {

        printf("%d  ",*(p+i));

    }

    free(p);

}
