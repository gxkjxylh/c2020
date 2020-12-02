#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
printf("%02d时:%02d分:%02d秒\n",a/3600,a%3600/60,a%60);


}
