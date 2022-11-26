#include<stdio.h>

#define LOWER -40
#define UPPER 300
#define STEP 20

#define FACTOR (5.0/9.0)
#define OFFSET 32

int main(void) {
	float fahr;
	
	for(fahr=LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3.0f %6.1f\n", fahr, FACTOR * (fahr-OFFSET));
	
	return 0;
}
