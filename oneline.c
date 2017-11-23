#include <stdio.h>

/* write a program that prints its input one word per line */

main() {

  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      printf("\n");
    else
      putchar(c);
  }
  printf("\n");
}
