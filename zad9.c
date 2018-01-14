#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

char napis[] = {"ala ma kota"};
int length = sizeof(napis)/sizeof(char);
char output[7];
int j=0, k=0;

int copyToTable(char* table, char* string, int index){
  k=length-index;
  for (size_t i = index; i < length; i++, j++) {
    table[j] = string[i];
    printf("%d|%d\n", j, i);
  }

}


int main() {

  copyToTable(output, napis, 3);

  for (size_t i = 0; i < k; i++) {
    printf("%c", output[i]);
  }
  printf("\n");

}
