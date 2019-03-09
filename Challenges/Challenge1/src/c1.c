#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Bad number of params");
    return -1;
  }

  if (strcmp(argv[1], "hunter12") == 0) {
    printf("Flag found\n");
  } else {
    printf("Incorrect password.\n");
  }

  return 0;

}