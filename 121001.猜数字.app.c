#include<stdio.h>
#include<string.h>
void main(){
printf("请输入名字进入游戏\n");
int b;
char a[20];

scanf("%s",&a);

if(strcmp(a,"小明")==0){
scanf("%d",&b);
if(b<15){
printf("你输入的值太小\n");}
else if(b>15){
printf("你输入的值太大\n");}
else if(b==15){
printf("你太厉害了");}}
}


