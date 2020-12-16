#include<stdio.h>
int myfunction(int x){
if(x<=0){
return 0;}
return x+myfunction(x);

}
void main(){
int a;
scanf("%d",&a);
printf("%d",myfunction(a));


}
