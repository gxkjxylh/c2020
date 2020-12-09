#include<stdio.h>
#include<string.h>
void main(){

	char c[]="www";
	printf("吃货的日程总是被安排的明明白白，请问现在是什么节？\n");
	scanf("%s",&c);
	if(strcmp(c,"春节")){
	printf("给我安排饺子。\n");}
    else if(strcmp(c,"端午节")){
	printf("给我安排粽子。\n");}
    else if(strcmp(c,"中秋节")){
	printf("给我安排月饼。\n");}
    else if(strcmp(c,"元宵节")){
	printf("给我安排汤圆。\n");}




}
