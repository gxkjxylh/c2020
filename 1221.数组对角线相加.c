#include<stdio.h>
void main(){
int b[10][10];
int a[10][10];
int i,j;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
scanf("%d",&b[i][j]);
for(i=0;i<5;i++)
for(j=0;j<5;j++){
if(i==j)
a[i][j]=b[i][j];
else{
a[i][j]=b[i][j]+b[j][i];
a[j][i]=0;
}
}
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
printf("%d",a[i][j]);
printf("\n");}}
