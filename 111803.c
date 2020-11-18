#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
if(a<0)
{printf("你还欠花呗");}
else if(a>=0&&a<=500)
{printf("赤贫");}
else if(a>=501&&a<=800)
{printf("贫困");}
else if(a>=801&&a<=1800)
{printf("打工人");}
else if(a>=1801&&a<=20000)
{printf("清洁工");}
else if(a>=20001&&a<=30000){
	printf("老值班人");}
else
printf("程序员");

