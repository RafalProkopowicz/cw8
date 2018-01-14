#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
  char napis[] = {"ala ma kota"};
  char output[11];
  int length = sizeof(napis)/sizeof(char);
  int j=0;

  for (size_t i = 0; i < length; i++) {

    if (napis[i]!=' ') {
      output[j] = napis[i];
    } else {
      j--;
    }
    j++;
  }

  for (size_t i = 0; i < j; i++) {
    printf("%c", output[i]);
  }
  printf("\n");
}
