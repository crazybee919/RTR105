#include<stdio.h>
#include<math.h>
void main(){
 double x=2.05,y,a0,a1,a2,a3,S0,S1,S2,S3;
 y = atan (-x);
 printf("y=atan(%.2f)=%.2f\n",x,y);

 a0 = (-x)/sqrt(1+pow(x,2))*(0/1*1*2)*pow(x,2)/1+pow(x,2);
 S0 = a0;
 printf("y=atan(%.2f)=%.2f\n",x,y);

a1 = (x)/sqrt(1+pow(x,2))*(1*2)/(pow(1,2)*4*(2*1+1)*pow(pow(x,2)/1+pow(x,2),1);
S1 = a1;
printf("%.2f\t%8.2f\t%8.2f\n",x,a0,S0);





}
