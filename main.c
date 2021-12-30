#include <stdio.h>
#include <ctype.h>
int main() {
  int n, i,x;
  scanf("%d", &x);
  scanf("%d", &n);

 
 
  
  if(isdigit(x) && isdigit(n))
  {
      for(i = 1; i <= x; ++i)
  {
    printf("%d*%d=%d\n", i, n, n * i);
  }

  }
  else{
    printf("wrong input");
  
      }
  return 0;
}
