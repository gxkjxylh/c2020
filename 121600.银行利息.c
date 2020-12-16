#include<stdio.h>
#include<math.h>
void main(){
	float r5,r3,r2,r1,r0,p,p1,p2,p3,p4,p5;
	p=1000;
	r1=0.015;
	r2=0.021;
	r3=0.0275;
	r5=0.03;
	r0=0.035;
	p1=p*(1+r5*5);
	p2=p*(1+r2*2)*(1+r3*3);
	p3=p*pow(1+r1,5);
printf("%f\n",p1);
printf("%f\n",p2);
printf("%f\n",p3);
}
