#include <stdio.h>
int main() {
  int n,R;
   scanf("%d %d %d", &n,&R);
  for (int i = 1; i <= R; i++) {
    printf("%d x %d = %d
", n, i, n * i);
  }
  return 0;
}
