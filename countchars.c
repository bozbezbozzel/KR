/* write a program to count blanks, tabs and newlines */
# include <stdio.h>

int main() 
{
	int c, x;
	
	x = 0;
	
	while((c = getchar()) != EOF) 
		if(c == '\n' || c == '\t' || c == ' ')
			x++;
	printf("Number of special chars: %d\n", x);
}