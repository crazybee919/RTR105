#include<stdio.h>
#include<math.h>

long long fact(long x) {
	if(x == 0)
		return 1;

	long long res = x;
	while(--x > 1) {
		res *= x;
	}

	return res;
}

double _atan(double x) {
	x *= -1;
	double res = ((-x)/sqrt(1 + x * x));
	double eit = 0;
	for(int k = 0; k < 21; k++)
		eit += (fact(2 * k) / (pow(fact(k), 2) * pow(4, k) * (2 * k + 1))) * pow((x * x) / (1 + x * x), k);

	return res * eit;
}

void main() {
	double x=2.05;
	
	printf("%lf %lf\n", atan(x), _atan(x));
}
