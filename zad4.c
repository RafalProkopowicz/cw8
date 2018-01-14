// ZAD 4
// na tyle ile pozwala typ zmiennej jak zadna z wartosci nie jest 0
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int m = 1,n = 1, liczba = 0;

int rekurencja(int a, int b){
  printf("wykonanie %d [%d][%d]\n", liczba++, m, n);

  if (m==0) {
    return n+1;
  }
  if (m>0 && n==0) {
    return rekurencja(m-1,1);
  }
  if (m>0 && n>0) {
    return rekurencja(m-1,rekurencja(m,n-1));
  }
}

int main() {
  printf("%d\n", rekurencja(m,n));
}
