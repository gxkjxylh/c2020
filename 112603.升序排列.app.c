#include<stdio.h>
void main(){
	int n,a,b,c;
	scanf("%d%d%d",&a,&b,&c);
if(a>b)
{n=a,a=b,b=n;}
if(a>c)
{n=a,a=c,c=n;}
if(b>c){
	n=b,b=c,c=n;}

printf("%d %d %d\n",a,b,c);

}
