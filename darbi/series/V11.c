#include<stdio.h>
#include<math.h>
void main(){
 double x=2.05,y,a0,a1,a2,a3,S0,S1,S2,S3;
 y = atan (-x);
 printf("y=atan(%.4f)=%.4f\n",x,y);

 a0 = ((-x) / sqrt(1 + pow(x, 2))) * (0 / 1 * 1 * 2) * pow(x, 2) / 1 + pow(x, 2);
 S0 = a0;
 printf("%.4f\t%8.4f\t%8.4f\n",x,a0,S0);

a1 = ((x) / sqrt(1 + pow(x, 2))) * (1 * 2) / (pow(1, 2) * 4 * (2 * 1 + 1) * pow(pow(x, 2) / 1 + pow(x, 2), 1));
S1 = a1;
 printf("%.4f\t%8.4f\t%8.4f\n",x,a1,S1);

a2 = ((x) / sqrt(1 + pow(x, 2))) * (4 * 3 * 2 * 1) / (pow(2 * 1, 2) * 16 * (2 * 2 + 1) * pow(pow(x, 2) / 1 + pow(x, 2), 2));
S2 = a2;
 printf("%.4f\t%8.4f\t%8.4f\n",x,a2,S2);

a3 = ((x) /sqrt(1 + pow(x,2))) * (6 * 5 * 4 * 3 * 2 * 1) / (pow(3 * 2 * 1, 2) * 64 * (2 * 3 + 1) * pow(pow(x, 2) / 1 + pow(x, 2), 3));
S3 = a3;
printf("%.4f\t%8.4f\t%8.4f\n",x,a3,S3);



}
