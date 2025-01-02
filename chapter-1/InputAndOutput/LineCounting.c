#include <stdio.h>

int main(){
	int c, nl;
	nl = 0;
	while((c = getchar()) != EOF){ /*read input*/
	
		if(c == '\n'){ /*If c is a new line then increments the counter*/
			++nl;
		}
	}
	printf("%d\n",nl); /*prints how many new lines there are*/
	return 0;

}
