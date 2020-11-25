#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
if(a<=100&&a>=0){printf("贫困打工人");}
else if(a<=1000&&a>=101){printf("一般打工人");}
else if(a<=20000&&a>=1001){printf("土豪打工人");}
else
{printf("输入错误，重新输入");}


}
