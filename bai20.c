#include<stdio.h>

 main()

{

    int n,i,dem,j;

    printf("nhap so n \n");

    scanf("%d",&n);

    for (i=1;i<n;i++)

  {

   dem=0;

  for(j=1;j<=i;j++)

  if(i%j==0)

  dem++;

  if(dem==2)

    printf("so nguyen tu 1 den n la:%2d\n",i);

  }
 }
