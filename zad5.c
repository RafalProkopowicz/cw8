// ZAD 5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int sumArray(int anArray[], int l, int r)
{
  printf("%d %d\n",l,r);
    int mid, lsum = 0, rsum = 0;
    if (r-l == 0)
    {
        return anArray[l];
    }
    //divide and conquer
    mid = (l+r) / 2;
    lsum = sumArray(anArray, l , mid);
    rsum = sumArray(anArray , mid+1, r);
    return lsum + rsum;
}

int main(void){
  int test[]={1,2,3,4,5};
  printf("%d\n",sumArray(test,0,4));
  return EXIT_SUCCESS;
}
