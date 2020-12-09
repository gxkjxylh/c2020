#include<stdio.h>
void main(){
int a,b;
printf("今天会不会下雨\n");
printf("会，请按1；不会，请按0；\n");
scanf("%d",&a);
if(a==1){
for(b=0;b<10;b++)
printf("回家收衣服啦\n");
}
if(a==0){
for(b=0;b<10;b++)
printf("出去浪\n");
}

}
