#include <stdio.h>

void main()

{

int n,k,i;

printf(" moi nhap n vao:");

scanf("%d",&n);

printf("moi ban nhap k vao");

scanf("%d",&k);

for (i=0;i<n;i++)

  if((i%k)==0)

    printf("%d",i);

}
