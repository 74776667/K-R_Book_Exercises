/*
 *
 *This program just reads whatever character you input and it prints it back again, it also works with whole words, very simple IO program
 *
 * */
#include <stdio.h>


int main(){
	
	int c = getchar();

	while(c != EOF){/*EOF MEANS END OF FILE*/
	
		putchar(c); /*displays the character*/
		c = getchar();/*gets the next character*/
	}	
	
	return 0;


}
