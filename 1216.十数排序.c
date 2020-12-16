#include <stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int t= 0;t<T;t++){
        int a[10];
for(int i=0;i<10;i++)
{
   scanf("%d",&a[i]);
}
for(int i=0;i<9;i++){
    for(int j = 9;j > i;j--){
        if(a[i]>a[j]){
            int aNew = a[i];
            a[i] = a[j];
            a[j] = aNew;
        }
    }
}
    for(int i =0;i < 10;i++)
{
    printf("%d ",a[i]);
}
printf("\n");
for(int i = 0;i < 10;i++)
{
    printf("%d ",a[9-i]);
    }
}
return 0;
}
