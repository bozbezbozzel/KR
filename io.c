# include <stdio.h>

/* copy input to output; 2nd version */

main()
{
	int c;
	
	c = getchar() != EOF;
	putchar(c);
	/*while((c = getchar()) != EOF) {
		putchar(c);
	}*/
}