#include <stdio.h>
int main() {
  int n, A,B;
   scanf("%d %d %d", &n,&A,&B);
  for (int i = A; i <= B; i++) {
    printf("%d x %d = %d
", n, i, n * i);
  }
  return 0;
}