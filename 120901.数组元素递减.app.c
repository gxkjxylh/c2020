#include<stdio.h>
#include<windows.h>
void main(){
	int s=91;
	int a,b;
	int c[9][10]={
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0}
	

	
	};

	for(a=0;a<=8;a++){
	for(b=0;b<=9;b++){
    s--;
	c[a][b]=s;
			printf("%d ",c[a][b]);
	}printf("\n");}
		Sleep(1000);


