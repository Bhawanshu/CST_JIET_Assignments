#include<stdio.h>

#define m 20

main(){

int a[m][m],i,j=0,r,max[10],c;

printf("Enter the number of rows");

scanf("%d",&r);

printf("Enter the number of column");

scanf("%d",&c);

printf("Enter the elements");

for(i=0;i<r;i++)

for(j=0;j<c;j++)

scanf("%d",&a[i][j]);

for(i=0;i<r;i++)

{

max[i]=a[i][j];

for(j=0;j<c;j++)

if(a[i][j]>max[i])

max[i]=a[i][j];

}

for(i=0;i<r;i++)

printf("\nMaximum element from %d row is:%d",i,max[i]);

}
