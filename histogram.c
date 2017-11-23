/* write a program to print a histogram of the lengths of words in its input*/

#include <stdio.h>

#define MAXWORDLEN 10
#define IN 1
#define OUT 0

main() {

  int c, wordlen, state;
  int word[MAXWORDLEN + 1];

  wordlen = 0;
  state = OUT;

  // fill array with zeros
  for (int i = 0; i < MAXWORDLEN + 1; i++) {
    word[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == ' ' || c == '\t') {
      state = OUT;
      ++word[wordlen];
      wordlen = 0;
    }
    else if (state == OUT) {
      state = IN;
      ++wordlen;
    }
    else {
      ++wordlen;
    }
    // for (int i = 0; i <= MAXWORDLEN + 1; ++i) {
    //   printf("%d: ", i);
    //   for (int n = 0; n <= word[i]; ++n) {
    //     printf("-");
    //   }
    //   printf("\n");
    // }
  }
  printf("Word length\tCount\n");
  for (int i = 1; i < MAXWORDLEN + 1; i++) {
    printf("%6d\t\t%d\n", i, word[i]);
  }
  printf("\n");
}
