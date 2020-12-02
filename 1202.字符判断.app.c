#include<stdio.h>
  void main(){
  char n;
  scanf("%c",&n);
  switch(n)
  {case 'w':printf("你在点击上键");break;
  case 's':printf("你在点击下键");break;
  case 'a':printf("你在点击左键");break;
  case 'd':printf("你在点击右键");break;
  default :printf("输入错误");}
}
