#include <stdio.h>

int memo(int *fib, int n){
  if(n==0 || n==1){
    return 1;
  }
  fib[n] = memo(fib, n-1) + fib[n-2];
  return fib[n];
}

int main(void){
  int fib[10];
  fib[0] = fib[1] = 1;
  memo(fib, 9);
  for(int i = 0; i<10; i++){
    printf("%d ", fib[i]);
  }
  printf("\n");
  return 0;
}
