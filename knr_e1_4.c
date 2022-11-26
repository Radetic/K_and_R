#include<stdio.h>

#define WHILE(x) for( ; x ; )

int main(void) {
	float fahr, celsius;
	int lower, upper, step;
	
	lower = -40; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	
	celsius = lower;
	printf("Header before the table\n");
	while(celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	
	return 0;
}
