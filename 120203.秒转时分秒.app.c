#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
printf("%d时:%d分:%d秒\n",a/3600,a%3600/60,a%60);


}
