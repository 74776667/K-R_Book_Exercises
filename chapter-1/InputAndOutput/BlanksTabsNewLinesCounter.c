#include <stdio.h>

int main(){
	int c, nl, tb, bl;
	nl = 0;
	tb = 0;
	bl = 0;
	while((c = getchar()) != EOF){ /*read input*/
	
		if(c == '\n'){ /*If c is a new line then increments the counter*/
			++nl;
		}
		if(c == '\t'){ /* if c is a tab then increments the counter*/
			++tb;
		}
		if(c == ' '){
			++bl;
		}
	}
	printf("new lines :%d\ntabs %d\nspaces: %d\n ",nl,tb,bl); /*prints how many new lines there are*/
	return 0;

}
