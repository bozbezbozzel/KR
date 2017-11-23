# include <stdio.h>

/* read in a text file,
write a new file with every ninth word */

/* while file open
  read each char
  count spaces
    if 8 spaces
      read next word into memory
      append to new file
  close file */
/* Curiosity_1_killed_2_the_3_cat,_4_so_5_whatever_6_you_7_do,_8_please*/

main(int argc, char *argv[]) {
  FILE *fp;
  int c, space;
  space = 0;

  if (argc == 1)
    printf("Give a file as input.\n");
  else {
    fp = fopen(argv[1], "r");
    do {
      c = fgetc(fp);
      if ((c == ' ' || c == '\n') && space < 8) {
        space++;
      }
      else if (space == 8) {
        putchar(c);
        if (c == ' ' || c == '\n')
          space = 0;
        }
      } while (c != EOF);
    fclose(fp);
    }
    printf("\n");
}
