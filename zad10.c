#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int compareStrings(char* string1, char* string2){
  if (string1==string2) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  char string[] = {"ala ma kota"};
  char szukanafraza[] = {"ko"};
  int length = sizeof(string)/sizeof(char);
  int slength = sizeof(szukanafraza)/sizeof(char);
  char fragment[slength-1];
  int k=0;

  for (size_t i = 0; i < length; i++) {
    for (size_t j = 0; j < slength-1; j++,k++) {
      fragment[j] = string[k];
    }
    k = k - slength+2;
    if (i<(length-slength)+1) {
      if (compareStrings(fragment, szukanafraza) == 0) {
        printf("nie znaleziono\n");
        for (size_t y = 0; y < slength-1; y++) {
          printf("%c\n", fragment[y]);
          //printf("%c\n", szukanafraza[y]);
        }
      } else {
        printf("znaleziono\n");
        break;
      }
    } else {
      printf("exit\n");
    }
  }
}
