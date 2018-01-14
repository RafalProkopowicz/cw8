#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

char napis[] = {"123456789"};

int lenstring(){
  printf("%d\n", sizeof(napis)/sizeof(char)-1);
}

int main() {
  lenstring();
}
