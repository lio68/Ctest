#include<stdio.h>

int main() {
  setvbuf(stdout, NULL, _IONBF, 0);
  int n, m, res;
       printf("Please enter an integer (n)\n");
       scanf("%d", &n);
       printf("Please enter an integer (m)\n");
       scanf("%d", &m);
          res = (n > m) ? n : m;
      printf("The maximum number of entered: %d\n", res);

	  return 0;
   }
