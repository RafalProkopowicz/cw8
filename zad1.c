// ZAD 1 2 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int a = 7,b = 26, c=0, xa=1, ya=0, xb=0, yb=1;

int euklides(int a, int b){
  printf("%d %d %d %d %d %d %d\n", a, b, c, xa, ya, xb, yb);
  if (a!=b && a>0 && b>0) {
    if (a > b){
      c = a/b;
      a = a % b;
      xa = xa - xb * c;
      ya = ya - yb * c;
    } else {
      c = b/a;
      b = b % a;
      xb = xb - xa * c;
      yb = yb - ya * c;
    }
    return euklides(a,b);
  }
  if (a>b) {
    /* code */
  }
  return a;
}

int main() {
  printf("NWD=%d\n", euklides(a,b));
}
