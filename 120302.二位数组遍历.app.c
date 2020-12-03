#include<stdio.h>
void main(){
int row,column;
int b[2][3]={
 {1,2,3},
 {4,5,6}
};
for(row=0;row<2;row++){
for(column=0;column<3;column++)
{printf("%d ",b[row][column]);
}printf("\n");
}
}


