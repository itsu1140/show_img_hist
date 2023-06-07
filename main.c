#include <stdio.h>

int memo(int *fib, int n){
  if(n==0 || n==1){
    return 1;
  }
  fib[n] = memo(fib, n-1) + fib[n-2];
  return fib[n];
}

int main(void){
  int n;
  scanf("%d", &n);
  int fib[n];
  fib[0] = fib[1] = 1;
  memo(fib, n-1);
  for(int i = 0; i<n; i++){
    printf("%d ", fib[i]);
  }
  printf("\n");
  return 0;
}
