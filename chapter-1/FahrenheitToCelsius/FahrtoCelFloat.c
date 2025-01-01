#include <stdio.h>
/*Same thing but this time we are using float instead of int
 *
 * we do this because we cant to "customize" the \t escape sequence using
 * int values to change the spacing and decimal limit
 * this version has the "add a header" exercise
 *
 * */

int main(){
	
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Celsius to Fahrenheit conversion\n");

	while(fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	
	}
	return 0;

}
