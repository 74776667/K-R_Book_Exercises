 Modern C compilers define EOF in the stdio.h include file - so you should never define EOF in your code. In modern C, the value of EOF is -1, but you should just include stdio.h and use the pre-defined EOF constant to check for end of file.

The "nuisance" of different values for EOF was resolved shortly after 1978. 
