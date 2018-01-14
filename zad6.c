// ZAD 6
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define size 6

int asciitab[size];
char stringtab[size]={'string'};

int stringToAscii(char string){
  for (size_t i = 0; i < size-1; i++) {
    asciitab[i] = (int) string[i];
  }
}

int main() {
  printf("%c\n", stringToAscii(*stringtab));
}
