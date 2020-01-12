#include<stdio.h>
#include<math.h>

#define k_max 17

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
	for(int k = 0; k < k_max; k++) {
		double eres = (fact(2 * k) / (pow(fact(k), 2) * pow(4, k) * (2 * k + 1))) * pow((x * x) / (1 + x * x), k);
		eit += eres;
	
		if(k == k_max - 2)
			printf("Priekspedejais: %.24lf\n", eres);
		else if(k == k_max - 1)
			printf("Pedejais: %.24lf\n", eres);
				
	}

	return res * eit;
}

void main() {
	double x;
	printf("Ievad x ");
	scanf("%lf", &x);

printf(
"                          500  " "\n"
"                         ----- " "\n"
"                          \\   " "\n"
"                           \\            (2k)!                  (   x^2   )"     "\n"
"                 -x         |  ----------------------------- * (---------)"    "\n"
"             _________ *   /      (k!)^2 * 4^k * (2k + 1)      ( 1 + x^2 )"    "\n"
"arctan(-x) =  ________    /    " "\n"
"             /1 + x^2    ----- " "\n"
"                          k=0  " "\n"
"" "\n"
"" "\n"
"\n");
	
	printf("C    atan(%lf) = %lf\n\n", x, atan(x));
	printf("Mans atan(%lf) = %lf\n", x, _atan(x));
}





