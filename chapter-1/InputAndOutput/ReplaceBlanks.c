#include <stdio.h>
/* this exercise took me a while as i wanted to solve it without using arrays or any other topic that the book hasnt mentioned yet*/

/* this might not be the best solution but it is what i could think of at the time*/

int main(){

	int c;
	int counter;
	int blankCounter;

	for(counter = 0; (c = getchar()) != EOF; ++counter){
	
		if(c == ' '){
			++blankCounter;	
		}
		if(c != ' '){
			blankCounter = 0;
		
		}	
	
		if(blankCounter > 1){
		
			printf("\b");
			++blankCounter;
		
		}
		putchar(c);
	}	
	
	return 0;
}
